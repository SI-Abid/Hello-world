#include <bits/stdc++.h>
using namespace std;

int Int(char c)
{
    return c - '0';
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        string s, l, r;
        int m;
        cin >> s >> m >> l >> r;
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            int li, ri;
            li = Int(l[i]);
            ri = Int(r[i]);
            int mx = ans;
            for (int j = li; j <= ri; j++)
            {
                int cur = ans;
                while (cur < n && s[cur] != j + '0')
                {
                    cur++;
                }
                mx = max(mx, cur);
            }
            ans = mx + 1;
        }
        if (ans > n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}