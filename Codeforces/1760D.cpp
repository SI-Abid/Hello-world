#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(n==1)
    {
        cout<<"YES"<<'\n';
        return;
    }
    bool flag=false;
    for (int i = 0; i < n-1; i++)
    {
        if(flag && v[i]>v[i+1])
        {
            cout<<"NO"<<'\n';
            return;
        }
        if(v[i]<v[i+1])
        {
            flag=true;
        }
    }
    cout<<"YES"<<'\n';
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}