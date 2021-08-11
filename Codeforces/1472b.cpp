#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x, sum=0, one=0;
        while(n--)
        {
            cin>>x;
            if(x&1) one++;
            sum+=x;
        }
        if(sum%2==1)
            puts("NO");
        else
        {
            sum>>=1;
            puts((sum%2==0 || (sum%2==1 && one!=0))?"YES":"NO");
        }
    }
    return 0;
}

//  2 2 2   3   1