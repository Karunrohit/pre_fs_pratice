////
//// Created by User on 12/12/2021.
////

#include <bits/stdc++.h>
using namespace std;
int num;
int **arr,**dp;
int min_cost(int i,int j){
    if(( i<0||i>= num)|| (j<0||j>=3)){
        return INT_MAX;
    }
    else if(i==num-1){
        return arr[i][j];
    }
    else if(dp[i][j]!=-1){
        return dp[i][j];
    }
    else{

        int x= min_cost(i+1,j-1);
        int y= min_cost(i+1,j+1);
        int z=min(x,y);
        if(z!=INT_MAX){
            return dp[i][j]=arr[i][j]+z;
        }
        else{
            return dp[i][j]=z;
        }
    }
}

int main() {

    cin >> num;
    arr= new int*[num];
    dp= new int*[num];
    for (int i = 0; i < num; i++){
        arr[i]=new int[3];
        dp[i]=new int[3];
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            dp[i][j]=-1;
        }
    }
    int min_c=INT_MAX;
    for(int j=0;j<num;j++){
        int x=min_cost(0,j);
        if(x<min_c){
            min_c=x;
        }
    }
    cout<<min_c;

}
//#include<bits/stdc++.h>
//using namespace std;
//
//int n,**arr,**DP;
//
//int DFS(int i,int j){
//    if( (i<0 || i>=n) || (j<0 || j>=3) )
//        return INT_MAX;
//
//    else if(i==n-1)
//        return arr[i][j];
//
//    else if(DP[i][j]!=-1)
//        return DP[i][j];
//
//    else{
//        int x = DFS(i+1,j-1);
//        int y = DFS(i+1,j+1);
//        int z = min(x,y);
//        if(z!=INT_MAX)
//            return DP[i][j] = arr[i][j]+z;
//        else
//            return DP[i][j] = z;
//    }
//}
//int main(){
//    cin>>n;
//    arr = new int*[n];
//    DP = new int*[n];
//    for(int i=0;i<n;i++){
//        arr[i] = new int[3];
//        DP[i] = new int[3];
//        for(int j=0;j<3;j++){
//            cin>>arr[i][j];
//            DP[i][j] = -1;
//        }
//    }
//
//    int res = INT_MAX;
//    for(int j = 0; j < 3; j++){
//        int x = DFS(0,j);
//        if(x<res)
//            res = x;
//    }
//    cout<<res;
//}