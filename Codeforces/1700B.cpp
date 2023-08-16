#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] != '9')
        for (int i = 0; i < n; i++)
            cout << '9' - s[i];
    else
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (s.back() == '0')
                    cout << 2;
                else
                    cout << 1;
            }
            else if (i == n - 1)
            {
                if (s[i] == '0')
                    cout << 1;
                else if (s[i] == '1')
                    cout << 0;
                else
                    cout << 11 - s[i] + '0';
            }
            else
            {
                if (s[i] == '0')
                    cout << 0;
                else if (s.back() < '2')
                    cout << 10 - s[i] + '0';
                else
                    cout << 9 - s[i] + '0';
            }
        }
    cout << nl;
}

signed main()
{
    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}