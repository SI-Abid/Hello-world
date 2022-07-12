#include<bits/stdc++.h>
#include <algorithm>
#define ll int
#define F first
#define S second
#define pb push_back
#define ed '\n'
#define FastRead ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    #endif
    
    FastRead;
    ll n,m,k,a,l,r,i,j,t,sum=2,ca=0,cnt=0,ans=0;
    string s,s1;
    cin>>t;
    while(t--)
    {
        ans=0,cnt=0;
        map< ll,ll >mp;
        cin>>n>>m;
        r=(m/n) + (m%n>0);
        for(i=0; i<m; i++)
        {
            cin>>a;
            mp[a]++;
        }
        for(auto it:mp)if(it.S>=r)cnt++;
        while(m>0)
        {
            r=(m/n) + (m%n>0);
            if(cnt>=m)
            {
                ans++;
                m=0;
                break;
            }
            ans+=max(r,sum);
            r = max(r,sum);
            cnt=0;
            for(j=1; j<=n; j++)
            {
                if(mp[j]>r)
                {
                    cnt++;
                    mp[j]-=r;
                    m-=r;
                }
                else
                {
                    l = r-mp[j];
                    m-=mp[j];
                    if(l&1)
                    {
                        mp[j]=1;
                        m-=l/2;
                        cnt++;
                    }
                    else
                    {
                        mp[j]=0;
                        m-=l/2;
                    }
                }
            }

        }
        cout<<ans<<ed;


    }




    return 0;
}
