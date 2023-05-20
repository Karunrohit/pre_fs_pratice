/*
Nagesh has given two words to check whether the first word 'source' is a
sub-series of second word 'target'.

A sub-series from a word can be formed by removing 0 or more characters without
changing the relative order of other characters in the word.

For example, 'nest' is a subseries of a word 'interst' , where as 'rest' is not.

Help Nagesh to return true if source is a subseries of target, otherwise false.

Constraints:
 0 <= source.length <= 100
 0 <= target.length <= 10^4
 source and target consist only of lowercase English letters.

Input Format:
-------------
Line-1:Two space separeted strings


Output Format:
--------------
Print a boolean result.


Sample Input-1:
---------------
pqsv pqrstuv

Sample Output-1:
----------------
true

Sample Input-2:
---------------
psr pqrst

Sample Output-2:
----------------
false

*/
#include<bits/stdc++.h>
using namespace std;
map<string ,bool> m1;
bool find(string str,string str1,int c,int d){
    if(c==0){
        return true;
    }
    if(d==0){
        return false;
    }
    string m=c+"|"+d;
    if(m1.find(m)==m1.end()){
        if(str[c]==str1[d]){
            m1.insert({m,find(str,str1,c-1,d-1)});
        }
        else{
            m1.insert({m,find(str,str1,c,d-1)});
        }
        return m1.find(m)->second;
    }

}
int main(){
    string str,str1;
    cin>>str>>str1;
    if(find(str,str1,str.length(),str1.length())){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

