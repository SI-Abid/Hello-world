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
        vector<int> a(n - 1), b(n);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        b[0] = a[0];
        b[n - 1] = a[n - 2];
        for (int i = 1; i < n - 1; i++)
        {
            b[i] = min(a[i - 1], a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}