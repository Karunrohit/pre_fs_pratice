//
// Created by User on 14/12/2021.
//
#include<stdio.h>
int min();
int distance[20];
int n;
int main(){
    int adj[20][20],adj1[20][20],flag[30];
    int i,j,root,x;
    int source,count=1,y=0;
    printf("enter no of nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for ( j = 0; j < n; j++) {
            scanf("%d",&adj[i][j]);
        }
    }
    printf("enter the source for broadcasting");
    scanf("%d",&source);
    for (int i = 0; i < n; i++) {
        flag[i]=0;
    }
    for ( root = 0; root < n; root++) {
            distance[i]=adj[root][i];
    }
    x=min();
    for (int i = 0; i < n; i++) {


    }
}