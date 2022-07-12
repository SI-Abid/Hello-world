#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> pre(n+1);
        pre[0]=0;
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+(s[i-1]=='W');
        }
        int ans=INT_MAX;
        for(int i=0;i<=n-k;i++)
        {
            ans=min(ans,pre[i+k]-pre[i]);
        }
        cout<< ans << '\n';
    }
    return 0;
}