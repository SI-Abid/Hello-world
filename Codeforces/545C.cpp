#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
vector<string> ans = {"NO", "YES"};

void solve()
{
    int n;cin>>n;vector<int> tree(n), height(n);
    for (int i = 0; i < n; i++)
    {
        cin>>tree[i]>>height[i];
    }
    int cut=1;
    int prev=-1e9;
    for (int i = 0; i < n-1; i++)
    {
        if(prev < tree[i]-height[i])
        {
            cut++;
            prev=tree[i];
        }
        else if(tree[i]+height[i] < tree[i+1])
        {
            cut++;
            prev=tree[i]+height[i];
        }
        else
        {
            prev=tree[i];
        }
    }
    cout<<cut<<nl;
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