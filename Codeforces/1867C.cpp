#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int x = 0;
    for (auto i : s)
    {
        if (i == x)
            x++;
        else
            break;
    }

    cout << x << endl;
    cin >> x;
    if (x == -2)
        exit(0);
    while (x >= 0)
    {
        cout << x << endl;
        cin >> x;
        if (x == -2)
            exit(0);
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