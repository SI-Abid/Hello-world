#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    if (a.front() == a.back())
    {
        cout << "-1\n";
        return;
    }
    vector<int> b, c;
    auto it = a.cbegin();
    while (*it == a.front())
    {
        b.push_back(*it);
        it++;
    }
    // cout << nl;
    while (it != a.cend())
    {
        c.push_back(*it);
        it++;
    }
    cout << b.size() << " " << c.size() << nl;
    for (auto i : b)
        cout << i << " ";
    cout << nl;
    for (auto i : c)
        cout << i << " ";
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