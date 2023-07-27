#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        vector<bool> who;
        for (auto x : a)
        {
            who.push_back(x % 2);
        }
        bool ok = true;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != who[i])
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}