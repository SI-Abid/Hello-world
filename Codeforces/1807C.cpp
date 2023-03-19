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
        string s;
        cin >> s;
        map<char, vector<int>> mp;
        bool ok = true;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]].push_back(i + 1);
        }
        for (auto it : mp)
        {
            if (it.second.size() > 1)
            {
                for (int i = 1; i < it.second.size(); i++)
                {
                    if ((it.second[0] & 1) != (it.second[i] & 1))
                    {
                        ok = false;
                        break;
                    }
                }
            }
        }
        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}