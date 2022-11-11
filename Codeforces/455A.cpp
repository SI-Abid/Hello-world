#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    int n;
    cin>>n;
    int a;
    vector<ll> dp(100002,0);
    vector<ll> cnt(100002,0);
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cnt[a]++;
    }
    dp[1]=cnt[1];
    for(int i=2;i<=100000;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+cnt[i]*i);
    }
    cout<<dp[100000];
    return 0;
}