//
// Created by User on 01/12/2021.
//
#include <bits/stdc++.h>
using namespace std;
/*double termOfGP(int A,int B,int N)
{
    //Your
    double r= (double)B/(double)A;
    if(N==1){
        return A;
    }
    if(N==2){
        return B;
    }
    else{
        double r1=r;
        cout<<r1;
        for(int i=3;i<=N;i++){
            r1=r1*r;
            cout<<r1<<endl;
        }
        return A*r1;
    }
}*/
double termOfGP(int A,int B,int N) {
    //Your
    double r = (double) B / (double) A;
    if (N == 1) {
        return A;
    }
    if (N == 2) {
        return B;
    } else {
        double r1 = r;
        cout << r1;
        for (int i = 3; i <= N; i++) {
            r1 = r1 * r;
            cout << r1 << endl;
        }
        return A * r1;
    }
}
int main(){
    int A,B;
    cin>>A>>B;
    int N;
    cin>>N;
    cout<<floor(termOfGP(A,B,N))<<endl;

}