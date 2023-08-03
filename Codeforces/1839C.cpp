#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (v.back() == 1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    int one = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] == 0)
            cout << "0 ";
        else
        {
            one++;
            if (i == 0 or v[i - 1] == 0)
            {
                cout << one << " ";
                one = 0;
            }
            else
                cout << "0 ";
        }
    }
    one += (v[0] == 1);
    cout << one << nl;
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