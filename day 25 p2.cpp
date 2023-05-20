#include<bits/stdc++.h>
using namespace std;
bool is_true(string str1,string str2){
    int count_num=0;
    int not_count=0;
    string str3;
    string str4;
    int i1,j1;
    if(str1.length()!=str2.length()){
        return false;
    }
    for(int i=0;i<str1.length();i++){
        if(str1[i]==str2[i]){
           count_num++;
        }
        else{
            not_count++;
            if(not_count>2){
                return false;
            }
            else{
                if(not_count==1){
                    i1=i;
                }
                if(not_count==2){
                    j1=i;
                }
            }
        }
    }
    if(count_num+2==str1.length() && str2[j1]==str1[i1] && str2[i1]==str1[j1]){
        return true;
    }
    else if(count_num==str1.length()) {
        for (int i = 0; i < str1.length() - 1; i++) {
            if (str1[i] == str1[i + 1]) {
                return true;
            }
        }
    }
    return false;
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<is_true(str1,str2);
}