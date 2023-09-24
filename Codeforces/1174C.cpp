#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int cnt = 1;
    n++;
    vector<int> a(n,0);
    for (int i = 2; i <= n; i++)
    {
        if(a[i]==0)
        {
            for (int j = i; j <= n; j+=i)
            {
                if(a[j]==0)
                a[j]=cnt;
            }
            cnt++;
        }
    }
    n-=2;
    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i+2]<<" ";
    }
    
    cout<<nl;
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