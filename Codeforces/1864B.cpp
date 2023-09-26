#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k%2==0){
        sort(s.begin(),s.end());
        cout<<s<<nl;
        return;
    }
    string odd, even;
    odd = even = "";
    for (size_t i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even += s[i];
        else
            odd += s[i];
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    for (int i=0,j=0;i<even.size() or j<odd.size();i++,j++)
    {
        if(i<even.size())cout<<even[i];
        if(j<odd.size())cout<<odd[i];
    }
    cout<<nl;
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