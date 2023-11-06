#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

vector<pair<int, int>> ans;
priority_queue<pair<int, int>> pq;
void solve()
{
    ans.clear();
    while(pq.size())pq.pop();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x)
        pq.push({x, i + 1});
    }
    while (pq.size() > 1)
    {
        auto a = pq.top();
        pq.pop();
        auto b = pq.top();
        pq.pop();
        ans.push_back({a.second, b.second});
        a.first--;
        b.first--;
        if (a.first)
            pq.push(a);
        if (b.first)
            pq.push(b);
    }
    cout << ans.size() << nl;
    for (auto [a, b] : ans)
        cout << a << " " << b << nl;
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