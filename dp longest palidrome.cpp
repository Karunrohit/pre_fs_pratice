/*
Mr. James professor at MIT, as a part of assignment he created a
problem statement related to words.
He gave a word w and asked them to design a method to
return the longest substring w1 in word w ,where w1 in reverse is also equal to w1.

NOTE: Alphabets are case sensitive ('A' and 'a' are not same).


Input Format:
-------------
A string S, consist of lowercase/uppercase letters or/and digits

Output Format:
--------------
Print a string.


Sample Input-1:
---------------
abbbabbcbbacdb

Sample Output-1:
----------------
abbcbba


Sample Input-2:
---------------
thedivideriswide

Sample Output-2:
----------------
edivide


*/

#include<bits/stdc++.h>
using namespace std;
int palindrome(string a,int l, int h){
    if(l==h){

    }
    if(a[l]==a[h]){}
}
int main(){
    string str;
    cin>>str;
    int i=0;
    int j=str.length();
    cout<<palindrome(str, i, j);
}