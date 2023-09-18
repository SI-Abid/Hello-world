#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        st.insert(s);
    }
    if (st.size() < n)
    {
        puts("0");
        return;
    }
    for (auto it = st.begin(); it != st.end(); it++)
    {
        auto xt = st.lower_bound((*it) & x);
        // cout << ((*it) & x) << " " << (*xt) << nl;
        if (xt != st.end() and xt != it and ((*it) & x)==*xt)
        {
            puts("1");
            return;
        }
    }
    set<int> nt;
    for (auto k : st)
    {
        nt.insert(x & k);
    }
    puts(nt.size() < n ? "2" : "-1");
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