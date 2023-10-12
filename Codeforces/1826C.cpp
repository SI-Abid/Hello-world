#include <bits/stdc++.h>
using namespace std;
int div(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}
signed main()
{
    int _;
    cin >> _;

    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, m;
        cin >> n >> m;
        if (n>1 and div(n) <= m)
            puts("NO");
        else
            puts("YES");
    }
    return 0;
}