#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int> v(n+1);
    for (int i = 1; i < n+1; i++)
    {
        cin>>v[i];
    }
    for (int i = 1; i < n+1; i++)
    {
        if(v.size()-1<v[i] or v[v[i]]<i)
        {
            puts("NO");
            return;
        }
    }
    puts("YES");
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