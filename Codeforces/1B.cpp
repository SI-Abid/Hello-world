#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s;
    cin >> s;
    if (s[0] == 'R' and isdigit(s[1]) and s.find('C') != string::npos)
    {
        int row = 0;
        int col = 0;
        for (int i = 1; s[i] != 'C'; i++)
        {
            row *= 10;
            row += s[i] - '0';
        }
        for (int i = s.find('C') + 1; i < s.size(); i++)
        {
            col *= 10;
            col += s[i] - '0';
        }
        // col--;
        string ans = "";
        while (col > 0)
        {
            col--;
            ans += col % 26 + 'A';
            col /= 26;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << row;
    }
    else
    {
        int col = 0;
        int i;
        for (i = 0; isalpha(s[i]); i++)
        {
            col = col * 26 + (s[i] - 'A' + 1);
        }
        cout << 'R';
        for (; i < s.size(); i++)
        {
            cout << s[i];
        }
        cout << "C" << col;
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