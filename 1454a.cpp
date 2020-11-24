#include "bits/stdc++.h"
using namespace std;
int main()
{
    // freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n, p;
        cin>>n;
        p=n;
        if(n&1)
        {
            while(--n>1)
                cout<<n<<" ";
            cout<<p<<" 1\n";
        }
        else
        {
            while(n>1)
            {
                cout<<n--<<" ";
            }
            puts("1");
        }
    }
    return 0;
}