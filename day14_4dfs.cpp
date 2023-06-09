/*
Chitti(ROBO) is busy in turning the people into chittis(ROBOS) by surrounding them.
In a room there are n*n boxes occupied by ROBOS and people.
   1.A person will be turned into ROBO if he is surrounded by all ROBOs.
   2.A person will not be turned into ROBO if he is on the edge of the room
     and all the connected people to him (directly or indirectly) are also not
     to be turned.
 Return the n*n boxes after conversion.

Input Format
-------------
Line-1:integer n represent the n*n boxes of the room..
Next n lines:Each line of string consists of combination of 'X'(represents ROBO)
and 'O'(represents a person)

Output Format:
--------------
Print n*n space seperated values after conversion.


Sample Input-1:
---------------
4
XXXX
XOOX
XXOX
OXXX

Sample Output-1:
----------------
X X X X
X X X X
X X X X
O X X X

Explanation:
------------
The people at second row and third row are converted to ROBOs as they are
surrounded by ROBOs.
But the person at fourth row is safe as he is on edge.


Sample Input-2:
---------------
 5
XOOOX
XXXXX
XOXXX
XXXOX
OXXXX

Sample Output-2:
----------------
X O O O X
X X X X X
X X X X X
X X X X X
O X X X X
 */
#include <bits/stdc++.h>
using namespace std;
int is_safe(int num, int arr[]){

}
int main(){
    int num;
    cin>>num;
    string arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    is_safe(num,arr);
}