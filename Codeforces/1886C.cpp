#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s;int n;cin>>s>>n;
    vector<bool> flag(n,true);
    priority_queue<char>pq;
    // int i=0;
    for(auto c:s){
        pq.push(c);
    }
    int cur=0;
    for (int x = 0; x < n; x++)
    {
        if(flag[x%n] and s[x%n]==pq.top()){
            flag[x%n]=false;
            pq.pop();
            
        }
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