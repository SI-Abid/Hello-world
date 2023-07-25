#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.rbegin(), a.rend());
        map<int, int> mp;
        int lmost = 0;
        int rmost = 0;
        int cnt = 0;
        for (auto x : a)
        {
            if (x > 0)
            {
                if (mp[x] == 0)
                {
                    cnt++;
                    mp[x]++;
                    if (lmost == 0)
                        lmost = x;
                    else if (x < lmost)
                        lmost = x;

                    if (rmost == 0)
                        rmost = x;
                    else if (x > rmost)
                        rmost = x;
                }
            }
            if (x == -1)
            {
                if (lmost == 0)
                {
                    mp[m]++;
                    cnt++;
                    lmost = m;
                }
                else if (lmost > 1 and mp[lmost - 1] == 0)
                {
                    mp[lmost - 1]++;
                    cnt++;
                    lmost--;
                }
            }
            if (x == -2)
            {
                if (rmost == 0)
                {
                    mp[1]++;
                    cnt++;
                    rmost = 1;
                }
                else if (rmost < m and mp[rmost + 1] == 0)
                {
                    mp[rmost + 1]++;
                    cnt++;
                    rmost++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}