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
        vector<int> v;
        bool flag = true;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (v.empty() or (flag and x >= v.front() and x >= v.back()))
            {
                v.push_back(x);
                ans += '1';
                continue;
            }
            if (flag and x < v.back() and x <= v[0])
            {
                flag = false;
                v.push_back(x);
                ans += '1';
                continue;
            }
            if (flag==0 and x <= v.front() and x >= v.back())
            {
                v.push_back(x);
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}