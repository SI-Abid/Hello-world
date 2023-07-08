#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, k;
        cin >> n >> k;
        vector<ll> arr(n + 1);
        vector<ll> sum(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + arr[i];
        }
        int i = 1, j = n - k;
        ll ans = 0;
        while (j <= n)
        {
            ans = max(ans, sum[j] - sum[i - 1]);
            i += 2;
            j++;
        }
        cout << ans << "\n";
    }
    return 0;
}