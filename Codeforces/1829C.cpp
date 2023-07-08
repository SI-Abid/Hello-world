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
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> s;
            if (mp.find(s) == mp.end())
                mp[s] = x;
            else
                mp[s] = min(mp[s], x);
        }
        int ans = -1;
        if (mp.find("11") != mp.end())
            ans = mp["11"];
        if (mp.find("10") != mp.end() && mp.find("01") != mp.end())
            ans = (ans == -1 ? mp["10"] + mp["01"] : min(ans, mp["10"] + mp["01"]));
        cout << ans << endl;
    }
    return 0;
}