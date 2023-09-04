#include <bits/stdc++.h>
using namespace std;

set<set<char>> S[4];
void setTheSet(char a, char b, char c)
{
    set<char> s = {a, b, c};
    S[s.size()].insert(s);
}

signed main()
{
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    char a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    /*
    a b c
    d e f
    g h i
    */
    setTheSet(a, b, c);
    setTheSet(d, e, f);
    setTheSet(g, h, i);
    setTheSet(a, d, g);
    setTheSet(b, e, h);
    setTheSet(c, f, i);
    setTheSet(a, e, i);
    setTheSet(c, e, g);
    cout << S[1].size() << '\n'
         << S[2].size();
    return 0;
}