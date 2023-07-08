#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        string s;
        cin >> s;
        int ans = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                if (i == 0)
                    ans *= 9;
                else
                    ans *= 10;
            }
        }
        if (s[0] == '0')
        {
            cout << "0\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
    return 0;
}