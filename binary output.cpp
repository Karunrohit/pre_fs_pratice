//
// Created by User on 06/12/2021.
//
#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int trueorfalse(int num){
    int temp=0;
    for(int i=0;i<num;i++){
        temp=temp+(arr[i]*pow(2,i+1));
        if(temp%5==0){
            cout<<"true\t";
        }
        else{
            cout<<"false\t";
        }
    }
    return 0;
}
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int k=trueorfalse(num);
}