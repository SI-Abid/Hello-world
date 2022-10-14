#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        map<char,bool> mp;
        char last = 'a';
        map<char,char> mp2;
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]] == false)
            {
                mp[s[i]] = true;
                ans += last;
                
            }
            else
            {
                ans += mp2[s[i]];
            }
        }

    }
    return 0;
}