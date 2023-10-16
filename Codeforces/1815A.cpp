#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    if(n&1){
        puts("YES");
        return;
    }
    ll sum=0;
    for (int i = 1; i < n; i+=2)
    {
        sum+= a[i]-a[i-1];
    }
    if(sum<0)puts("NO");
    else puts("YES");
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