#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a;
    string t = s;
    sort(t.begin(), t.end());
    for (int i = 0; i < n; i++)
    {
        if (t[i] != s[i])
            a.push_back(i + 1);
    }
    if (s == t)
    {
        puts("0");
    }
    else
    {
        puts("1");
        cout << a.size();
        for (auto i : a)
            cout << " " << i;
        cout << nl;
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