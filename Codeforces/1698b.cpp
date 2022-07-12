#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0, sum = 0;
        if (k == 1)
        {
            cout << (n - 1) / 2 << '\n';
            continue;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] + a[i + 1])
            {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}