/*
ID: siaabid1
LANG: C++17
TASK: gift1
*/
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    map<string, int> mp;
    vector<string> vs;
    int n;
    cin >> n;
    int nn = n;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s] = 0;
        vs.push_back(s);
    }
    while (nn--)
    {
        string giver;
        cin >> giver;
        int amt, cnt;
        cin >> amt >> cnt;
        if (cnt == 0)
            continue;
        amt /= cnt;
        while (cnt--)
        {
            string x;
            cin >> x;
            mp[giver] -= amt;
            mp[x] += amt;
        }
    }
    for (auto x : vs)
        cout << x << ' ' << mp[x] << '\n';
    return 0;
}