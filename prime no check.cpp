//
// Created by User on 01/12/2021.
//
#include <bits/stdc++.h>

using namespace std;
bool isPrime(int N)
{
    //Your code here
    if(N<=1){
        return false;
    }

    if(N==2 || N==3){
        return true;
    }
    if(N%2==0 || N%3==0){
        return false;
    }
    else{
        for(int i=5;i*i<=N;i=i+6){
            if(N%i==0 || N%(i+2)==0){
                return false;
            }
        }
        return true;
    }


}
int exactly3Divisors(int Num)
{
    int count =0;
    for(int i=2;i*i<=Num;i++){
        cout<<i;
        if(isPrime(i))
            count++;
    }
    return count;
}
int main(){
    int N;
    cin>>N;
        cout<<exactly3Divisors(N);

}