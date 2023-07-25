#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, k;
        cin >> n >> k;
        vector<int> fibs = {0, 1};
        for (int i = 3; i <= k; i++)
        {
            fibs.push_back(fibs[i - 2] + fibs[i - 3]);
            if (fibs.back() > n)
                break;
        }
        if (fibs.back() > n)
        {
            cout << "0\n";
            continue;
        }
        int a, b;
        b = fibs.back();
        fibs.pop_back();
        a = fibs.back();
        int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            int y = n - a * i;
            if (y < i)
                break;
            if (y % b == 0 and y / b >= i)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}