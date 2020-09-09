#include "bits/stdc++.h"
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        long long n, k, cnt=0;
        cin>>n>>k;
        while(true)
        {
            if(n%k==0)
            {
                n/=k;
                cnt++;
            }
            else
            {
                n-=(n%k);
                cnt+=(n%k);
            }
            
            if(n==0)
                break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}