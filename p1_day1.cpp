#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    map<int, int> m1;
    for(int i=0;i<num;i++){

    }
    m1.insert(pair<char, int>('a', 40));
    m1['a'] = 50;
    cout << "a => " << m1.find('a')->second << '\n';
}