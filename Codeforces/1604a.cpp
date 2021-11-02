#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n+5];
        long long cnt=0;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
            if(a[i]>i)
                cnt+=max(0LL, a[i]-i-cnt);
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}