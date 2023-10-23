#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int full = min({a / 3, b / 2, c / 2});
    a -= full*3;
    b -= full*2;
    c -= full*2;
    int ans = full * 7;
    vector<char> ch = {'a', 'b', 'c', 'a', 'c', 'b', 'a','a', 'b', 'c', 'a', 'c', 'b', 'a'};
    map<char, int> mp = {{'a', a}, {'b', b}, {'c', c}};
    int ct = 0;
    for (int i = 0; i < 7; i++)
    {
        map<char, int> tmp = mp;
        int cnt = 0;
        for (int j = 0; j < 7; j++)
        {
            if (i + j == 14)
                break;
            if (tmp[ch[i + j]] == 0)
                break;
            cnt++;
            tmp[ch[i + j]]--;
        }
        ct = max(ct, cnt);
    }
    cout << ans + ct << nl;
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}