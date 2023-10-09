#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if(n<7){
        puts("NO");
        return;
    }
    set<int> s;
    if (n % 3 == 0)
    {
        s.insert(1);
        s.insert(4);
        s.insert(n - 5);
    }
    else
    {
        s.insert(1);
        s.insert(2);
        s.insert(n - 3);
    }
    if (s.size() == 3)
    {
        puts("YES");
        for (auto &&i : s)
        {
            cout << i << ' ';
        }
        cout << nl;
    }
    else
    {
        puts("NO");
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