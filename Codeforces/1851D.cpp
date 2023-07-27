#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto x : v)
        os << x << " ";
    return os;
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        long long n;
        cin >> n;
        vector<long long> a(n - 1);
        for (auto &x : a)
            cin >> x;
        map<long long, int> mp;
        long long x = 0;
        for (int i = 0; i < n - 1; i++)
        {
            mp[a[i] - x]++;
            x = a[i];
        }
        string ans = "YES";
        long long xx = (n * (n + 1)) / 2;
        if (x != xx)
        {
            mp[xx - x]++;
            for (int i = 1; i <= n; i++)
            {
                if (mp[i] != 1)
                {
                    ans = "NO";
                    break;
                }
            }
            cout << ans << "\n";
            continue;
        }
        int missing = 0;
        int missing_cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                missing += i;
                missing_cnt++;
            }
        }
        if (missing_cnt != 2)
        {
            ans = "NO";
        }
        else if ((missing <= n and mp[missing] == 2) or (missing > n and mp[missing] == 1))
        {
            ans = "YES";
        }
        else
        {
            ans = "NO";
        }
        cout << ans << "\n";
    }
    return 0;
}