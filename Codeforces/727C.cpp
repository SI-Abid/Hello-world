#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            puts("? 1 3");
        }
        else
        {
            printf("? %d %d\n", i, i + 1);
        }
        // cout<<nl;
        fflush(stdout);
        cin >> a[i];
    }
    a[0] = (a[1]+a[0]-a[2])/2;
    for (int i = 1; i < n; i++)
    {
        a[i] -= a[i - 1];
    }
    printf("!");
    for (auto X : a)
        printf(" %d", X);
    puts("");
    fflush(stdout);
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}