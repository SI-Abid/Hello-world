#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

const int MAX = 5e5 + 10;

int a[MAX], n;

int get(int cur, int inc, int prev)
{
    if (cur > n)
        return 0;
    int ret = 0;
    if (inc == -1)
    {
        ret = 1 + get(cur + cur, cur, a[cur]);
        ret = max(ret, get(cur + 1, inc, prev));
    }
    else
    {
        ret = get(cur + inc, inc, prev);
        if (a[cur] > prev)
            ret = max(ret, 1 + get(cur + cur, cur, a[cur]));
    }
    return ret;
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i+1];
    }
    cout << get(1, -1, -1) << nl;
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