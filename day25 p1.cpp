/*
Dinesh has given p number of elements in an array arr[],where p is always even.
He has to do the following steps.
 1.Make p/2 pairs from p elements.
 2.Find the minimum value in each pair.
 3.Add all the minimum values from each pair.

Your task is to help Dinesh to find a method to get the maximum possible sum by
following the above steps.



Input Format:
-------------
Line-1: An integer p number of elements.
Line-2: p space separated integers represent the elements.

Output Format:
--------------
Print an integer.

Constraints:
 1 <= p <= 10^4
 -10^4 <= arr[i] <= 10^4


Sample Input-1:
---------------
6
2 1 2 3 5 6

Sample Output-1:
----------------
8

Explanation:
------------
Pairs are (1,2) (2,3) (5,6). minimum in each pair are 1,2,5.
sum=1+2+5=8

Sample Input-2:
---------------
8
4 3 1 5 2 9 6 7

Sample Output-2:
----------------
16

Explanation:
------------
Pairs are (1,2) (3,4) (5,6) (7,9). minimum in each pair are 1,3,5,7.sum=1+3+5+7=16

*/
#include<bits/stdc++.h>
using namespace std;
int sum(vector<int> arr){
    sort(arr.begin(),arr.end());
    int sum1=0;
    for(int i=0;i<num;i=i+2){
        sum1+=arr[i];
    }
    return sum1;
}
int main(){
    int num;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        array[temp]+=1;
    }
    for(int i=0;i<num;i++){

    }
}

