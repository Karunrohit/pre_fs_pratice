//
// Created by User on 09/12/2021.
//
//
// Created by User on 09/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n;
    cin>>n;
    int i;
    for(i=0;i<str.size();i++){
        if(str.size()-i>n){
            swap(str[i], str[i+n-1]);
            i=i+(2*n)-1;
        }
    }
    cout<<str;

}