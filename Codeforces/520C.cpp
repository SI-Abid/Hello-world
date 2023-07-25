#include<bits/stdc++.h>
using namespace std;

int bigMod(int a,int b,int m)
{
    if(b==0)
    {
        return 1%m;
    }
    long long x=bigMod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
    {
        x=(x*a)%m;
    }
    return x;
}

signed main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    int mx=0;
    for(auto i:mp)
    {
        mx=max(mx,i.second);
    }
    int cnt=0;
    for(auto i:mp)
    {
        if(i.second==mx)cnt++;
    }
    int ans=bigMod(cnt,n,1000000007);
    cout<<ans<<endl;
    return 0;
}