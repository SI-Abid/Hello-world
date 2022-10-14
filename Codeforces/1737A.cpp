#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        string ans = "";
        int c;
        for (int i = 0; i < k; i++)
        {
            c = 0;
            char j;
            for (j = 'a'; j <= 'z'; j++)
            {
                if (c == n / k)
                {
                    break;
                }
                if (mp[j] > 0)
                {
                    c++;
                    mp[j]--;
                }
                else
                {
                    break;
                }
            }
            ans += j;
        }
        sort(ans.rbegin(), ans.rend());
        cout << ans << endl;
    }
    return 0;
}