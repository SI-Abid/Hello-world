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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        long long ans = 1;
        for (int i = 0; i < k; i++)
        {
            if (ans < a.back())
            {
                for (int x : a)
                {
                    if (x <= ans)
                    {
                        ans++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                ans += n;
            }
        }
        if (a.front() != 1)
            ans = 1;
        cout << ans << "\n";
    }
    return 0;
}