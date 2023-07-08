#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    vector<vector<ll>> a(2000, vector<ll>(2000, 0));
    vector<ll> ans(2000000, 0);
    ll tmp = 1;
    for (int i = 1; i < 2000; i++)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            a[j][i - j] = a[j - 1][i - j] + a[j][i - j - 1] - a[j - 1][i - j - 1] + tmp * tmp;
            ans[tmp] = a[j][i - j];
            tmp++;
        }
    }
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}