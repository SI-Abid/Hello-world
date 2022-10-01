#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<ll> type(n);
        vector<ll> a[2];
        for(int i=0;i<n;i++)
        {
            cin>>type[i];
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[type[i]].push_back(x);
        }
        sort(a[0].begin(), a[0].end());
        sort(a[1].begin(), a[1].end());
        ll ans=0;
        if(a[0].size()==a[1].size())
        {
            ans+=accumulate(a[0].begin(), a[0].end(), 0LL)*2;
            ans+=accumulate(a[1].begin(), a[1].end(), 0LL)*2;
            ans-=min(a[0].front(), a[1].front());
        }
        else if(abs(int(a[0].size()-a[1].size()))==1)
        {
            ans+=accumulate(a[0].begin(), a[0].end(), 0LL)*2;
            ans+=accumulate(a[1].begin(), a[1].end(), 0LL)*2;
            if(a[0].size()>a[1].size())
            {
                ans-=a[0].front();
            }
            else
            {
                ans-=a[1].front();
            }
        }
        else
        {
            int minn = min(a[0].size(), a[1].size());
            ll tsum = 0;
            if(a[0].size()>a[1].size())
            {
                for(int i=0;i<a[0].size()-minn;i++)
                {
                    tsum+=a[0][i];
                }
            }
            else
            {
                for(int i=0;i<a[1].size()-minn;i++)
                {
                    tsum+=a[1][i];
                }
            }
            ans+=accumulate(a[0].begin(), a[0].end(), 0LL)*2;
            ans+=accumulate(a[1].begin(), a[1].end(), 0LL)*2;
            ans-=tsum;
        }
        cout<<ans<<endl;
    }
    return 0;
}