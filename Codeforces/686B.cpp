#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;cin>>n;vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    while(!is_sorted(a.begin(),a.end()))
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int x=i;
                while(x<n-1 and a[x]>a[x+1])swap(a[x],a[x+1]),x+=2;
                cout<<i+1<<' '<<x<<nl;
            }
        }
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