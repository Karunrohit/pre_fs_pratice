//
// Created by User on 09/12/2021.
//

#include <bits/stdc++.h>
using namespace std;
char arr[100][100];
bool isSafe[100][100];
int n;

void DFS(int n, int m)
{
    if (n < 0 || n >= n || m < 0 || m >= n || isSafe[n][m] || arr[n][m] == 'X')
        return;
    else
    {
        isSafe[n][m] = true;
        DFS(n+1, m);
        DFS(n-1, m);
        DFS(n, m+1);
        DFS(n, m-1);

    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = s[j];
            isSafe[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        DFS(i, 0);
        DFS(0, i);
        DFS(n - 1, i);
        DFS(i, n - 1);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isSafe[i][j])
                cout << "O ";
            else
                cout << "X ";
        }
        cout << endl;
    }
    return 0;
}