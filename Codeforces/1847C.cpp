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
        vector<bool> zor(256);
        zor[0] = true;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= a[i];
            zor[ans] = true;
        }
        int mx = 0;
        for (int i = 0; i < 256; i++)
        {
            if (zor[i])
            {
                for (int j = 0; j < 256; j++)
                {
                    if (zor[j])
                    {
                        mx = max(mx, i ^ j);
                    }
                }
            }
        }
        cout << mx << endl;
        // cout<< max(*max_element(zor.begin(),zor.end()), *max_element(a.begin(),a.end())) <<endl;
    }
    return 0;
}