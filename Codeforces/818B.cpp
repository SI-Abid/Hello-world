#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> l(m);
    for (auto &x : l)
        cin >> x;
    vector<int> a(n + 1, 0);
    vector<bool> used(n + 1, false);
    for (int i = 1; i < m; i++)
    {
        int x = (l[i] - l[i - 1] + n) % n;
        if (!x)
            x = n;
        if (a[l[i - 1]] == 0)
        {
            if (used[x])
            {
                puts("-1");
                return;
            }
            a[l[i - 1]] = x;
            used[x] = true;
        }
        else if (x != a[l[i - 1]])
        {
            puts("-1");
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i + 1] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (!used[j + 1])
                {
                    a[i + 1] = j + 1;
                    used[j + 1] = true;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i + 1] << " \n"[i == n - 1];
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