#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int c=count(s.begin(),s.end(),'B');
    if(c==k){
        puts("0");
        return;
    }
    puts("1");
    if(c>k){
        int i;
        for (i = 0; i < n; i++)
        {
            if(s[i]=='B'){
                c--;
            }
            if(c==k)break;
        }
        i++;
        cout<<i<<" A"<<nl;
    }
    else{
        int i;
        for (i = 0; i < n; i++)
        {
            if(s[i]=='A'){
                c++;
            }
            if(c==k)break;
        }
        i++;
        cout<<i<<" B"<<nl;
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