#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n,k;cin>>n>>k;
    int ans=2023;
    for (size_t i = 0; i < n; i++)
    {
        int x;cin>>x;
        if(ans%x==0){
            ans/=x;
        }
        else{
            ans=0;
        }
    }
    if(ans==0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        cout<<ans;
        for (size_t i = 1; i < k; i++)
        {
            cout<<" 1";
        }
        cout<<"\n";
    }
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