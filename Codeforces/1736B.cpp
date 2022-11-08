#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll a, ll b)
{
    return a * b / __gcd(a, b);
}

signed main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<int> a(n + 2, 1);

        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b(n + 2, 1);
        for (int i = 1; i <= n + 1; i++)
        {
            b[i] = lcm(a[i], a[i - 1]);
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != __gcd(b[i], b[i + 1]))
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        // ll prev=a[0];
        // cout<<prev<<" ";
        // for(int i=0;i<n;i++)
        // {
        //     prev=prev*a[i];
        //     cout<<prev<<" ";
        // }
        // cout<<"\n";
    }
    return 0;
}