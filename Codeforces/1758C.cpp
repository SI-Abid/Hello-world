#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        int n, x;
        cin >> n >> x;
        if (n % x != 0 or x == 1)
        {
            cout << "-1\n";
            continue;
        }
        vector<int> a;
        a.push_back(0);
        a.push_back(x);
        for (int i = 2; i < n; i++)
        {
            a.push_back(i);
        }
        a.push_back(1);
        for (int i = 2; i * i <= n / x; i++)
        {
            while (n / x % i == 0)
            {
                a[x] = x * i;
                x *= i;
            }
        }
        if (x != n)
        {
            a[x] = n;
        }
        // remove first element from vector
        a.erase(a.begin());
        for (auto i : a)
            cout << i << ' ';

        cout << endl;
    }
    return 0;
}