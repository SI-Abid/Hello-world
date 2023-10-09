#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll hyp(ll a, ll b)
{
    ll x = a*a-b*b;
    ll y = 2*a*b;
    ll d = sqrt(x*x-y*y);
    return d;
}

set<ll> st;
void solve()
{
    ll n;
    cin >> n;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            if (st.find(n) != st.end())
            {
                puts("YES");
                return;
            }
        }
    }
    if (st.find(n) != st.end())
        puts("YES");
    else
        puts("NO");
}

int main()
{
    for (int i = 1; i <= 2500; i++)
    {
        for (int j = 1; j <= 2500; j++)
        {
            st.insert(hyp(i, j));
        }
    }
    // freopen("a1.out","w",stdout);
    // for(auto x:st)cout<<x<<"\n";
    // cout<<st.size()<<" "<<*st.rbegin()<<endl;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
