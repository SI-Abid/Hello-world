#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] != i)
            {
                int cost = abs(i - v[i]);
                ans.push_back(cost);
            }
        }
        int res=ans[0];
        for (int i = 1; i < ans.size(); i++)
        {
            res = __gcd(res, ans[i]);
        }
        cout << res << "\n";
    }
    return 0;
}