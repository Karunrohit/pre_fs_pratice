//
// Created by User on 09/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
vector<int> parent;
int findparent(int a){
    if(parent[a]==a){
        return a;
    }
    else{
        return parent[a]= findparent(parent[a]);
    }
}
int union1(int a ,int b){
    a= findparent(a);
    b= findparent(b);
    if(a!=b){
        if(a<b){
            parent[b]=a;
        }
        else{
            parent[a]=b;
        }
    }
}
int main(){
    int num,row;
    cin>>num>>row;
    for (int i = 0; i < num; i++) {
        parent.push_back(i);
    }
    for(int i=0;i< row;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        union1(temp1,temp2);
    }
    vector<int> parent1= parent;
    sort(parent1.begin(),parent1.end());
    int count=1;
    for(int i=1 ;i<parent1.size();i++){
        if(parent1[i]!=parent1[i-1]){
            count++;
        }
    }
    cout<<count;
}








//int main(){
//    int num;
//    cin>>num;
//    int k;
//    cin>>k;
//    for (int i = 0; i <num; i++) {
//        parent.push_back(i);
//    }
//    for (int i = 0; i < k; i++) {
//        int temp;
//        int temp2;
//        cin>>temp>>temp2;
//        union1(temp,temp2);
//    }
//    int count=0;
//    for (int i = 0; i < parent.size(); i++) {
//        if(parent[i]==i){
//            count++;
//        }
//    }
//    cout<<count;
//}
