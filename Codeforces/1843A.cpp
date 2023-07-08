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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int sum = 0;
        for (int i = 0; i < n / 2; i++)
        {
            sum += (a[n - 1 - i] - a[i]);
        }
        cout << sum << '\n';
    }
    return 0;
}