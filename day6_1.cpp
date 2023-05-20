#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> m;
    vector<string> arr;
    string c;
    cin>>c;
    for(char & i:c){
        if(m.find(i)==m.end()){
            m.insert({i,1});
        }
        else{
            m.find(i)->second++;
        }
    }
    for(int i=0; i<c.length();i++){
        if(m.find(c[i])!=m.end()){
            if(m.find(c[i])->second==1){
                cout<<i;
                return 0;
            }
        }
    }
    cout<<"-1";
}
