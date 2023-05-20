//
// Created by User on 26/11/2021.
//
// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


    int digitsInFactorial(int N)
    {
        double num=0;
        for(int i=1;i<=N;i++){
            num= num+ log10((double)i);
        }
        num=floor(num)+1;
        return (int)num;
    }

// { Driver Code Starts.

int main()
{
    int T;

    //taking testcases
    cin>>T;
/*   while(T--) {
        int N;

        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }*/
    cout<<digitsInFactorial(T)<<endl;
    return 0;
}
// } Driver Code Ends