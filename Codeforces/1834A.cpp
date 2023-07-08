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
        int sum = 0;
        int sign = 1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            sign *= x;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum >= 0 and sign >= 0)
                break;
            cnt++;
            sum += 2;
            sign *= -1;
        }
        cout << cnt << endl;
    }
    return 0;
}