#include "bits/stdc++.h"

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        long long n=0, x, i=1, p=0;
        cin>>x;
        
        while(true)
        {
            n += (i*(1<<p));
            // printf("%d\n",n);
            if(n>x)
                break;

            i=2*i+1;
            p++;
        }

        printf("%lld\n", p);
    }
    return 0;
}