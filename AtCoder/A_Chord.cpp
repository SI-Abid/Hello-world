#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    vector<string> v={"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    string s;
    cin>>s;
    for(auto x:v){
        if(s==x){
            cout<<"Yes"<<nl;
            return;
        }
    }
    cout<<"No"<<nl;
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