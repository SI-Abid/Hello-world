#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

bool included(char l, char r, char m)
{
    return (l <= m and m <= r) or (r <= m and m <= l);
}

void solve()
{
    string s;
    cin >> s;
    char first = s.front();
    char last = s.back();
    vector<pair<char, int>> tile;
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (included(first, last, s[i]))
            tile.push_back({s[i], i + 1});
    }
    if (first <= last)
        sort(tile.begin(), tile.end());
    else
        sort(tile.rbegin(), tile.rend());
    // cout << first << " " << last << nl;
    cout << abs(last - first) << " " << tile.size()+2 << nl;
    cout << 1 << " ";
    for (auto [c, i] : tile)
        cout << i << " ";
    cout << s.size() << nl;
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