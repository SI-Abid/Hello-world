#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int i=0;
        while(i<n and s[i]=='0')
        {
            i++;
        }
        while(i<n and s[i]=='1')
        {
            i++;
        }
        if(i==n)
        {
            cout<<ans<<'\n';
            continue;
        }
        for(;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}