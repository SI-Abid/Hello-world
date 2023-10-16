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
    sort(a.begin(), a.end());
    if (a.front() == 0 and a.back() == 0)
    {
        puts("No");
        return;
    }
    puts("Yes");
    ll sum = 0;
    int fr = 0, bk = n;
    while (fr < bk)
    {
        if (sum <= 0)
        {
            bk--;
            cout << a[bk] << " ";
            sum += a[bk];
        }
        else
        {
            cout << a[fr] << " ";
            sum += a[fr];
            fr++;
        }
    }
    puts("");
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