#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // if sorted
        if (is_sorted(v.begin(), v.end()))
        {
            cout << "0" << '\n';
            continue;
        }
        vector<pair<int, int>> ans;
        if (v[0] & 1)
        {
            // bring smallest odd to the front
            int small = v[0];
            int idx = 0;
            for (int i = 1; i < n; i++)
            {
                if (v[i] & 1 and v[i] <= small)
                {
                    small = v[i];
                    idx = i;
                }
            }
            if (idx != 0)
            {
                v[0] = small;
                ans.push_back({1, idx + 1});
            }
            // carry this odd to the end where thers an even
            for (int i = 1; i < n; i++)
            {
                if (v[i] % 2 == 0)
                {
                    v[i] = small;
                    ans.push_back({1, i + 1});
                }
            }
            // bring this odd to the front if theres odd bigger than it
            for (int i = n - 2; i > 0; i--)
            {
                if (v[i] & 1 and v[i] != v.back())
                {
                    v[i] = v.back();
                    ans.push_back({i + 1, n});
                }
                if (ans.size() == n)
                    break;
            }
            cout << ans.size() << '\n';
            for (auto [l, r] : ans)
            {
                cout << l << ' ' << r << '\n';
            }
        }
        else
        {
            // bring smallest even to the front
            int small = v[0];
            int idx = 0;
            for (int i = 1; i < n; i++)
            {
                if (v[i] % 2 == 0 and v[i] <= small)
                {
                    small = v[i];
                    idx = i;
                }
            }
            if (idx != 0)
            {
                v[0] = small;
                ans.push_back({1, idx + 1});
            }
            // carry this even to the end where thers an odd
            for (int i = 1; i < n; i++)
            {
                if (v[i] & 1)
                {
                    v[i] = small;
                    ans.push_back({1, i + 1});
                }
            }
            // bring this even to the front if theres even bigger than it
            for (int i = n - 2; i > 0; i--)
            {
                if (v[i] % 2 == 0 and v[i] != v.back())
                {
                    v[i] = v.back();
                    ans.push_back({i + 1, n});
                }
                if (ans.size() == n)
                    break;
            }
            cout << ans.size() << '\n';
            for (auto [l, r] : ans)
            {
                cout << l << ' ' << r << '\n';
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << ' ';
        // }
        // cout << '\n';
    }
    return 0;
}