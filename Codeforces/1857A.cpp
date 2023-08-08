#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
vector<string> ans = {"NO", "YES"};

void solve()
{
    int n;
    cin >> n;
    int odd,even;
    odd=even=0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]&1?odd++:even++;
    }
    cout<< ans[odd%2==0] << nl;
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