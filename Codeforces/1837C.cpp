#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        string s;
        cin >> s;
        int n = s.size();
        vector<int> pos;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?')
                pos.push_back(i);
        }
        sort(pos.begin(), pos.end());

        int cur = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (i == 0)
                {
                    s[i] = '0';
                }
                else
                {
                    auto id = upper_bound(pos.begin() + cur, pos.end(), i);
                    if (id == pos.end())
                    {
                        s[i] = '1';
                        continue;
                    }
                    int idx = *id;
                    // cout << i << " " << idx << " " << s[i - 1] << " " << s[idx] << endl;
                    if (s[i - 1] == '1' and s[idx] == '1')
                    {
                        s[i] = '1';
                    }
                    else
                    {
                        s[i] = '0';
                    }
                    cur = idx;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}