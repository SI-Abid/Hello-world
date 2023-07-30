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
        int l = 0, r = a[n-1];
        while (l < r)
        {
            int m = (l + r) / 2;
            int first = 0;
            int second = n - 1;
            while (first + 1 < n && a[first + 1] - a[0] <= 2 * m)
            {
                first++;
            }
            while (second - 1 >= 0 && a[n - 1] - a[second - 1] <= 2 * m)
            {
                second--;
            }
            first++;
            second--;
            if (first > second or a[second] - a[first] <= 2 * m)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << r << endl;
    }
    return 0;
}