#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    ll suma = accumulate(a.begin(), a.end(), 0LL);
    // ll sumb = accumulate(b.begin(), b.end(), 0LL);
    if (k & 1)
    {
        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(b.begin(), b.end());
        if (mx > mn)
        {
            suma -= mn;
            suma += mx;
        }
        cout << suma << nl;
    }
    else
    {
        int mna = *min_element(a.begin(), a.end());
        int mxa = *max_element(a.begin(), a.end());
        int mnb = *min_element(b.begin(), b.end());
        int mxb = *max_element(b.begin(), b.end());
        suma -= mna;
        suma += mxb;
        // gellyfish
        suma -= max(mxb, mxa);
        suma += min(mna, mnb);
        cout << suma << nl;
    }
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