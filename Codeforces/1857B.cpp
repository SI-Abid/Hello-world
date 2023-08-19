#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    // find first character greater than 4
    int i = 0;
    while (i < s.size() and s[i] < '5')
        i++;
    if (i == s.size())
    {
        cout << s << nl;
        return;
    }
    s = "0" + s;
    int cnt = 0;
    for (int j = n; j > 0; j--)
    {
        if (s[j] >= '5')
        {
            cnt = j;
            // s[j] = '0';
            if (j != 0)
            {
                s[j - 1] += 1;
            }
        }
    }
    for (int i = cnt; i <= n; i++)
    {
        s[i] = '0';
    }

    if (s[0] == '0')
        s = s.substr(1);
    cout << s << nl;
    // i = s.find_first_of('0');
    // if (i == 0)
    // {
    //     s = "1" + string(s.size(), '0');
    // }
    // else
    // {
    //     s = s.substr(0, i + 1) + string(s.size() - i - 1, '0');
    // }
    // cout << s << nl;
    // cout<<cnt<<' '<<s<<nl;
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