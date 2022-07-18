#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int cnt = -1;
        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > 0)
            {
                ans += a[i];
                if (cnt == -1)
                    cnt = 0;
            }
            if (cnt != -1 and a[i] == 0)
            {
                cnt++;
            }
        }
        cout << (ans + cnt == -1 ? 0 : ans + cnt) << endl;
    }
    return 0;
}