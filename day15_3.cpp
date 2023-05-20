//
// Created by User on 09/12/2021.
//
#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin>>n;
    bool flag=1;
    map<int,int> m;
    for(int i=0;i<2*n;i=i+2){
        int second,first;
        cin>>first;
        cin>>second;
        m.insert({first,second});
    }

    auto itr=m.begin();
    while(itr!=m.end()){
        int temp=itr->second;
        advance(itr,1);
        if(itr==m.end()){
            break;
        }
        if(temp>itr->first){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}