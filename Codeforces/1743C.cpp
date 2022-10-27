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
        string s;
        cin>>n>>s;
        vector<int> v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        long long ans=0;
        int prev=0;
        for (size_t i = 0; i < n; i++)
        {
            if(s[i]=='1')
            {
                if(prev>v[i])
                {
                    ans+=prev;
                    prev=v[i];
                }
                else
                {
                    ans+=v[i];
                }
            }
            else
                prev=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}