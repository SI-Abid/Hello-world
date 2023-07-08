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
        long long sum = 0;
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                pos++;
                while (i < n and a[i] <= 0)
                {
                    i++;
                }
                i--;
            }
        }
        cout << sum << ' ' << pos << '\n';
    }
    return 0;
}