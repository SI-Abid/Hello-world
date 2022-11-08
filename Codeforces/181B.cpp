#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

signed main()
{
    int n;
    cin>>n;
    vector<pii> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int midx = (v[i].first + v[j].first);
            int midy = (v[i].second + v[j].second);
            if(midx%2==0 && midy%2==0 && binary_search(v.begin(), v.end(), pii(midx/2, midy/2)))
            {
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}