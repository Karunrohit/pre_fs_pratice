//
// Created by User on 08/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;
    float temp=0;
    float max;
    for(int i=0;i<s;i++){
        temp=temp+arr[i];
    }
    max=temp;
    for(int i=s;i<num;i++){
        temp=temp+arr[i]-arr[i-s];
        if(temp>max){
            max=temp;
        }
    }
    cout<<max/s;
}