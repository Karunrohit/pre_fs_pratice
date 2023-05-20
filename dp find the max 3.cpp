/*
 Chinmay playing a game. Game has a display of N numbers in a row, nums[].
 Chinmay has to pick the numbers one after the other.

Once Chinmay picks a number num[i], she will score num[i] points and
the number will be disappared on the board, simultaneously all the numbers having
the value 'num[i]+1' or 'num[i]-1' also disappears.

Chinmay has to select the numbers on the board,
such that no more numbers will be left over on the board.

Chinmay wants to score maximum number of points.

Initially chinmay has 0 points with her.
Can you help Chinmay to score maximum number of points.

 Input Format:
 -------------
Line-1 -> an integers N, number of numbers on the game board.
Line-2 -> N space separated integers, numbers on the game board nums[].

 Output Format:
--------------
Print an integer as result, maximum score she can get.

Sample Input-1:
---------------
3
4 5 3

Sample Output-1:
----------------+
 8

 Explanation:
 ------------
 Delete 5 to earn 5 points, consequently 4 is also deleted.
  Then, delete 3 to earn 3 points.
  Totally 8 is the score.

 Sample Input-2:
 ---------------
 6
 4 4 5 5 5 6

Sample Output-2:
----------------
15

Explanation:
-------------
Delete 5 to earn 5 points, deleting both 4's and the 6.
Then, delete 5 again to earn 5 points, and 5 again to earn 5 points.
Totally 15 is the score.

*/
#include<bits/stdc++.h>
using namespace std;
vector<int> counting(10001);
map<int,int> map1;
int get_max_score(int maximum){
    if(maximum==1){
        return maximum*counting[maximum];
    }
    if(maximum==2){
        return max(maximum*counting[maximum],(maximum-1)*counting[maximum-1]);
    }
    else{
        if(map1.find(maximum)==map1.end()){
            int x= max(get_max_score(maximum-1),counting[maximum]*maximum+get_max_score(maximum-2));
            map1.insert({maximum,x});
        }
        return map1.find(maximum)->second;
    }
}
int main(){
    int num;
    cin>>num;
    int maximum=0;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        counting[temp]++;
        if(maximum<temp){
            maximum=temp;
        }
    }
    cout<<get_max_score(maximum);
}