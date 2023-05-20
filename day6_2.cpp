//
// Created by User on 08/12/2021.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    vector<int> array,array1;
    for(int i=0;i<word.length();i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            array.push_back(i);
            array1.push_back(i);
        }
    }
    reverse(array1.begin(),array1.end());
    int count=0;
    for(int i=0;i<word.length();i++){
        if(i==array[count]){
            cout<<word[array1[count]];
            count++;
        }
        else{
            cout<<word[i];
        }
    }
}
