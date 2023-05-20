//
// Created by User on 12/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void max_of_num(){
    sort(v.begin(),v.end());
    int temp1=1,temp2=1;
    temp1=temp1*(v[0]*v[1]);
    int s=v.size();
    temp2=temp2*(v.at(s-1)*v.at(s-2));
    if(temp1>temp2){
        if(temp1*v.at(s-3)>temp1*v[2]){
         cout<<temp1*v.at(s-3);
        }
        else{
           cout<<temp1*v[2];
        }

    }
    else{
        if(temp2*v.at(s-3)>temp2*v[2]){
            cout<<temp2*v.at(s-3);
        }
        else{
           cout<<temp2*v[2];
        }
    }

}
int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
     max_of_num();
}