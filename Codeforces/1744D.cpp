#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int ct(ll x)
{
    int ans=0;
    while(x%2==0)
    {
        ans++;
        x/=2;
    }
    return ans;
}

signed main()
{
    ll _;
    cin >> _;
    for (ll tc = 1; tc <= _; tc++)
    {
        // prllf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> cnt;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt.push_back(ct(i+1));
        }
        ll twos=0;
        for (size_t i = 0; i < n; i++)
        {
            twos+=ct(a[i]);
        }
        if(twos>=n)
        {
            cout<<0<<'\n';
        }
        else
        {
            ll need=n-twos;
            ll ans=0;
            sort(cnt.rbegin(),cnt.rend());
            for (size_t i = 0; i < n; i++)
            {
                need-=cnt[i];
                ans++;
                if(need<=0)
                {
                    break;
                }
            }
            if(need>0)
            {
                cout<<-1<<'\n';
            }
            else
            {
                cout<<ans<<'\n';
            }
        }
    }
    return 0;
}