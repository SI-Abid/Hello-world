#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    auto it = a.begin();
    auto ij = b.begin();
    vector<int> ans;
    while (it != a.end() or ij != b.end())
    {
        if (it != a.end() and *it <= k)
        {
            ans.push_back(*it);
            if (*it == 0)
                k++;
            it++;
        }
        else if (ij != b.end() and *ij <= k)
        {
            ans.push_back(*ij);
            if (*ij == 0)
                k++;
            ij++;
        }
        else
        {
            cout << "-1\n";
            return;
        }
    }
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
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