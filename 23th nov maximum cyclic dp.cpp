/*
Mahesh checking his luck in diamonds.There are N boxes and each box has a number
of diamonds in it. box[i] is the number of diamonds in ith box(0-indexed).

The boxes are arranged in cyclic fashion means box[N-1] is adjacent to box[0].

Mahesh can select the boxes to get the diamonds. But there is a condition that
he cannot choose the boxes which are adjacent.

Help Mahesh to get maximum diamonds.

Input Format:
-------------
Line-1: An Integer N represents number of boxes.
Line-2: N space separated integers represents diamonds in each box.

Output Format:
--------------
Print an integer.

Constraints:

    1 <= N <= 100
    0 <= box[i] <= 1000


 Sample Input-1:
 ---------------
4
5 10 25 21

Sample Output-1:
----------------
31

Explanation:
------------
He can select either 5+25 or 10+21.
The maximum is 31.

Sample Input-2:
---------------
3
20 30 40


 Sample Output-2:
 ----------------
40

Explanation:
------------
Each box is adjacent to other 2 boxes. so he can choose only one box with maximum value which is 40.

*/
#include<bits/stdc++.h>
using namespace std;
int m[1000];
int num;
vector<int> arr;
int check(int i,int j){
    if(num%2!=0){
        return max(i-arr[0],j);
    }
    else{
        return i;
    }
}
int get_max(int i){
    if(i==0){
        return arr[0];
    }
    if(i==1){
        return max(arr[i],arr[i-1]);
    }
    else{
        if(m[i]==0){
            int x = max(get_max(i - 1), arr[i] + get_max(i - 2));
                m[i] = x;
        }
        return check(m[i],m[i-1]);
    }
}
int get_diamonds(vector<int> box){
    int lengths= box.size();
    int m[lengths];
    arr=box;
    return get_max(lengths-1);
}

int main(){
    cin>>num;
    vector<int> array;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        array.push_back(temp);

    }
     cout<< get_diamonds(array);
}