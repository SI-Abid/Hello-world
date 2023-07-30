#include <bits/stdc++.h>
using namespace std;

signed main()
{
    using ll = long long;
    int _;
    cin >> _;
    vector<ll> fib = {1, 1};
    for (int i = 2; i <= 50; i++)
    {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        ll x, y;
        cin >> n >> x >> y;
        bool ok = false;
        while (n--)
        {
            ll fn = fib[n];
            ll fn1 = fib[n + 1];
            if(y>fn and y<=fn1)
            {
                ok = true;
                break;
            }
            if(y>fn1)
            {
                y -= fn1;
            }
            swap(x,y);
        }
        if (ok)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        // vector<pair<ll, ll>> p = {{2, 2}, {2, 2},{1,3},{2,3},{3,3},{2,4},{2,5}};
        // pair<ll,ll> xy = {x, y};

        // if (find(p.begin(), p.end(), xy) != p.end())
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
    return 0;
}