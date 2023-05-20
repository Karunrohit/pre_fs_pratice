//
// Created by User on 12/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
map<int,int> m;
void missing(int n){
    for(int i=1;i<=n;i++){
        if(m.find(i)==m.end()){
            cout<<i;
            return;
        }
    }
}
int main(){
    int num;
    cin>>num;

    for (int i = 0; i < num; i++) {
        int temp;
        cin>>temp;
        if(m.find(temp)==m.end()){
            m.insert({temp,1});
        }
        else{
            m.find(temp)->second++;
            cout<<temp<<" ";
        }
    }
    missing(num);
}