#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n,r;cin>>n>>r;
    set<int> st;
    int trap=0;
    while(n--)
    {
        int x;cin>>x;st.insert(x);
    }
    auto it = st.rbegin();
    int ans=0;
    while(*it>trap and it!=st.rend())
    {
        // cout<<*it<<",";
        ans++;
        it++;
        trap+=r;
    }

    cout<<ans<<nl;
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