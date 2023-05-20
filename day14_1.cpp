//
// Created by User on 08/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int temp=0;
    int count=0;
    for(int i=0;i<num;i++){
        int temp1;
        cin>>temp1;
        if(temp1==2){
            count++;
        }
        else{
            if(temp<count){
                temp=count;
                count=0;
            }
            else{
                count=0;
            }
        }

    }
    cout<<temp;
}