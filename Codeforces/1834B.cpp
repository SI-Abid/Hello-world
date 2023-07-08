#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        string a, b;
        cin >> a >> b;
        for (int i = a.size(); i < b.size(); i++)
        {
            a = '0' + a;
        }
        int ans = 0;
        bool flag = 1;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] < b[i])
            {
                if (flag)
                {
                    ans += abs(a[i] - b[i]);
                    flag = 0;
                }
                else
                {
                    ans += 9;
                }
            }
            else if (!flag)
            {
                ans += 9;
            }
        }
        cout << ans << endl;
    }
    return 0;
}