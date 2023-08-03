#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int d, sumTime;
    cin >> d >> sumTime;
    vector<pair<int, int>> v(d);
    for (int i = 0; i < d; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    int sumMin = 0, sumMax = 0;
    for (int i = 0; i < d; i++)
    {
        sumMin += v[i].first;
        sumMax += v[i].second;
    }
    if (sumMin <= sumTime and sumTime <= sumMax)
    {
        cout << "YES\n";
        int rem = sumTime - sumMin;
        for (int i = 0; i < d; i++)
        {
            int x = min(rem, v[i].second - v[i].first);
            cout << v[i].first + x << " ";
            rem -= x;
        }
        cout << nl;
    }
    else
    {
        cout << "NO\n";
    }
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}