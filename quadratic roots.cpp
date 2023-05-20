
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int digitsInFactorial(int N) {
        int count;
        while (N>= 1) {
            N= N/ 10;
            ++count;
        }
        return count;
    }

};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {int N;
        cin>>N;
        Solution ob;
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}