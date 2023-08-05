#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    int lt, rt;
    lt = rt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lt += x == -1;
        rt += x == -2;
        if (x > 0)
            a.push_back(x);
    }
    set<int> s(a.begin(), a.end());
    a = vector<int>(s.begin(), s.end());
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int x = a[i];
        int bameSeatAse = x - 1;
        int daneSeatAse = m - x;
        int bameManushAse = i;
        int daneManushAse = a.size() - i - 1;
        int bameSeatVoraJabe = min(bameSeatAse, bameManushAse + lt);
        int daneSeatVoraJabe = min(daneSeatAse, daneManushAse + rt);
        ans = max(ans, bameSeatVoraJabe + daneSeatVoraJabe + 1);
    }
    ans = max(ans, max(lt, rt)+(int)a.size());
    // cout << ans << " ";
    // age max negative bosai
    cout << min(ans, m) << nl;
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