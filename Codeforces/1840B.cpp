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
        int a = log2(n);
        cout << ((a < k) ? n + 1 : 1 << k) << endl;
    }
    return 0;
}