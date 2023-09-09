#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> pr(n), ne(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pr[i] >> ne[i];
        pr[i]--;
        ne[i]--;
    }
    vector<pair<int, int>> list;
    for (int i = 0; i < n; i++)
    {
        if (pr[i] == -1)
        {
            int p = i;
            while (ne[p] != -1)
            {
                p = ne[p];
            }
            list.emplace_back(i, p);
        }
    }
    for (int i = 1; i < list.size(); i++)
    {
        ne[list[i - 1].second] = list[i].first;
        pr[list[i].first] = list[i - 1].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << pr[i] + 1 << " ";
        cout << ne[i] + 1 << nl;
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