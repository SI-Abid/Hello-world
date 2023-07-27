#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        vector<int> color1, color2;
        int i;
        for (i = 0; i < n; i++)
        {
            if (a[i] == a[0])
            {
                color1.push_back(i);
            }
            if (color1.size() == k)
                break;
        }
        int j = i;
        for (int i = n - 1; i > j; i--)
        {
            if (a[i] == a.back())
                color2.push_back(i);
            if (color2.size() == k)
                break;
        }
        if (a.front() == a.back() and color1.size() + color2.size() >= k)
        {
            cout << "YES\n";
            continue;
        }
        if (color1.size() < k or color2.size() < k or color1.back() > color2.back())
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}