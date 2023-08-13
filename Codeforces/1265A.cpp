#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

char next(char c)
{
    if (c == '#')
        return 'a';
    return (c - 'a' + 1) % 3 + 'a';
}

char next(char x, char y)
{
    return x xor y xor 'a' xor 'b' xor 'c';
}

void judge(string &s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << "-1\n";
            return;
        }
    }
    cout << s << nl;
}

void rec(string &s, int i, int j)
{
    // if i and j colides
    if (i > j)
        return;
    if (i == 1)
    {
        s[i] = next(s[i + 1]);
        return rec(s, i + 1, j);
    }
    if (j == s.size() - 2)
    {
        s[j] = next(s[j - 1]);
        return rec(s, i, j - 1);
    }
    // if odd length
    // cout << i << " " << j << ' ' << s << nl;
    if ((j - i + 1) & 1)
    {
        if (s[i - 1] == s[j + 1])
        {
            s[i] = s[j] = next(s[i - 1]);
            rec(s, i + 1, j - 1);
        }
        else
        {
            s[i] = s[j] = next(s[i - 1], s[j + 1]);
            rec(s, i + 1, j - 1);
        }
    }
    else
    {
        s[i] = next(s[i - 1]);
        rec(s, i + 1, j);
    }
}

void solve()
{
    string s;
    cin >> s;
    s = "#" + s + "#";
    vector<pair<int, int>> qs;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            int x = i;
            int y = i;
            while (i < s.size() and s[i] == '?')
                y++, i++;
            qs.push_back({x, y - 1});
        }
    }
    for (auto [x, y] : qs)
    {
        rec(s, x, y);
    }
    s.erase(0, 1);
    s.pop_back();
    judge(s);
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