#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

bool isGood(string s)
{
    for (int i = 0; i < s.size()-1; i++)
        if(s[i]==s[i+1])return false;
    return true;
}

void solve()
{
    int n,k;cin>>n>>k;
    string s,t;cin>>s>>t;
    // if s is good itself  -> YES
    if(isGood(s))
    {
        puts("YES");return;
    }
    // if t is bad itself   -> NO
    if(!isGood(t))
    {
        puts("NO");return;
    }
    // if s in bad and t cant fix it -> NO
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            if(t.back()==s[i] or t.front()==s[i])
            {
                puts("NO");
                return;
            }
        }
    }
    // else -> YES
    puts("YES");
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

// took 20 min