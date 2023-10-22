#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x % 10]++;
    }
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < min(mp[i], 3); j++)
            a.push_back(i);

    for (int i = 0; i < a.size(); i++)
        for (int j = i + 1; j < a.size(); j++)
            for (int k = j + 1; k < a.size(); k++)
                if ((a[i] + a[j] + a[k]) % 10 == 3)
                {
                    puts("YES");
                    return;
                }

    puts("NO");
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