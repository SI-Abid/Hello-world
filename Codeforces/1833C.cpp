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
            cin >> a[i];
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
                odd++;
        }
        if (*min_element(a.begin(), a.end()) % 2 == 1)
        {
            puts("YES");
            continue;
        }
        if (odd > 0)
        {
            puts("NO");
        }
        else
        {
            puts("YES");
        }
    }
    return 0;
}