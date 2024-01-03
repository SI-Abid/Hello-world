#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    n--;
    if (n % 3 == 0)
    {
        puts("First");
        return;
    }
    n += 2;
    if (n % 3 == 0)
    {
        puts("First");
        return;
    }
    puts("Second");
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