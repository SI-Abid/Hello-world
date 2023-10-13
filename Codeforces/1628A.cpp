#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> last(n + 1, -1);
    for (int i = 0; i < n; i++)
    {
        last[a[i]] = i;
    }
    vector<int> b;
    vector<int> seen(n + 1, -1);
    int cur = 0;
    while (cur < n)
    {
        int mex = 0;
        for (int i = cur; i < n; i++)
        {
            seen[a[i]] = cur;
            while (seen[mex] == cur)
                mex++;
            if (last[mex] <= i)
            {
                cur = i + 1;
                break;
            }
        }
        b.push_back(mex);
    }
    cout << b.size() << nl;
    for (auto x : b)
        cout << x << " ";
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