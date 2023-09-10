#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
int gcd(set<int>&s)
{
    int ans=*s.begin();
    for(auto x:s)
    ans=__gcd(ans,x);
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    // if (accumulate(a.begin(), a.end(), 0) == 0)
    // {
    //     cout << "0\n";
    //     return;
    // }
    set<int> s;
    for (size_t i = 0; i < n / 2; i++)
    {
        s.insert(abs(a[i] - a[n - i - 1]));
    }
    if (s.size() > 1)
        cout << gcd(s)<<nl;
    else
        cout << *s.begin() << nl;
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