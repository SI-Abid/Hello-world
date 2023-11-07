#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int x = __builtin_popcount(n);
    if (k > n or k < x)
    {
        puts("NO");
        return;
    }
    puts("YES");
    priority_queue<int> ans;
    for (int i = 0; (1 << i) <= n; i++)
    {
        if ((1 << i) & n)
        {
            ans.push(1 << i);
        }
    }
    while(ans.size()<k)
    {
        int it=ans.top();
        ans.pop();
        ans.push(it/2);
        ans.push(it/2);
    }
    while(!ans.empty())
    {
        cout<<ans.top()<<" ";
        ans.pop();
    }
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