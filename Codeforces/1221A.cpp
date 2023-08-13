#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.count(2048) >= 1)
    {
        cout << "YES" << nl;
        return;
    }
    int target = 2048;
    int cnt = 1;
    while (target)
    {
        target /= 2;
        cnt *= 2;
        if (s.count(target) >= cnt)
        {
            cout << "YES" << nl;
            return;
        }
        cnt -= s.count(target);
    }
    cout<<"NO\n";
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