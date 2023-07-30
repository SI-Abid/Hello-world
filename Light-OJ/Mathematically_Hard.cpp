#include <bits/stdc++.h>
using namespace std;

signed main()
{
    using ll = unsigned long long;
    int n = 5000002;
    vector<int> phi(n + 1);

    function<void(int)> phi_1_to_n = [&](int n)
    {
        phi[0] = 0;
        phi[1] = 1;
        for (int i = 2; i <= n; i++)
            phi[i] = i - 1;

        for (int i = 2; i <= n; i++)
            for (int j = 2 * i; j <= n; j += i)
                phi[j] -= phi[i];
    };

    phi_1_to_n(n);
    vector<ll> ans(n + 1, 0);
    for (int i = 1; i <= n; i++)
        ans[i] = ans[i - 1] + (ll)phi[i] * (ll)phi[i];
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        printf("Case %d: ", tc);
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%llu\n", ans[b] - ans[a - 1]);
    }
    return 0;
}