#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    a = b = "";
    int flag = 0;
    while (n)
    {
        int x = n % 10;
        if (x % 2 == 0)
        {
            a += '0' + (x / 2);
            b += '0' + (x / 2);
        }
        else
        {
            a += '0' + (x / 2) + flag;
            b += '0' + (x / 2) + (flag ^ 1);
            flag ^= 1;
        }
        n/=10;
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    cout << stoi(a) << " " << stoi(b) << nl;
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