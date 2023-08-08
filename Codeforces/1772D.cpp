#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long


void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(is_sorted(v.begin(),v.end()))
    {
        cout<<"0\n";
        return;
    }
    if(is_sorted(v.rbegin(),v.rend()))
    {
        cout<< (*max_element(v.rbegin(),v.rend()) + 1) << nl;
        return;
    }
    int dscd=0,ascd;
    for (int i = 1; i < n; i++)
    {
        
    }
    
    cout<<"asdf\n";
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