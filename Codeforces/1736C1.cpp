#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(ll n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}
signed main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>ans;
        int cnt=1;
        int seg;
        for(int i=0;i<n;)
        {
            if(a[i]>=cnt)
            {
                for(seg=1;a[i]>=cnt and i<n;seg++,i++)
                {
                    cnt++;
                }
                cnt=1;
                ans.push_back(seg-1);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        ll tot = 0;
        for(int i=0;i<ans.size();i++)
        {
            tot+=sum(ans[i]);
        }
        cout<<tot<<"\n";
    }
    return 0;
}