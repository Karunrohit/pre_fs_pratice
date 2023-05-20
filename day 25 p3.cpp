#include<bits/stdc++.h>
using namespace std;
int num;
int min_sub_arr(vector<int> arr){
    int min=49999;
    int count=0;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]!=arr[j]){
                count++;
            }
            else{
                if(i==j+1){
                    return 2;
                }
                else{
                    if(min>count){
                        min=count;
                        count=0;
                    }
                }
            }
        }
    }
    return min;
}
int main(){
    cin>>num;
    vector<int> arr;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<min_sub_arr(arr)+2;
}