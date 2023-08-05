#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> k(n);
    for (int i = 0; i < n; i++)
        cin >> k[i];
    sort(k.begin(), k.end());
    while (m--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c == 0 or a * c < 0)
        {
            cout << "NO\n";
            continue;
        }
        // y = ax^2+bx+c
        double xx = b - (2LL * sqrt(a * c));
        ll x = (ll)ceil(xx);
        // if(x<0){
        //     cout<<"NO\n";
        //     continue;
        // }
        // cout<< x << " == "<<xx<< nl;
        auto it = lower_bound(k.begin(), k.end(), xx + 1);
        if (xx < 0)
        {
            it = lower_bound(k.begin(), k.end(), xx);
        }
        if (it == k.end())
            cout << "NO\n";
        else
        {
            if (*it == 0)
                cout << "NO\n";
            else
            {
                cout << "YES\n";
                cout << *it << nl;
            }
        }
    }
    cout << nl;
}

signed main()
{
    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}