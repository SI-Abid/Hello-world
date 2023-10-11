#include <bits/stdc++.h>
using namespace std;

int main()
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
        n += n;
        int ans = 0;
        char last = '.';
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                if (last != ')')
                    ans++;
            }
            last = s[i];
        }
        cout << ans << '\n';
    }
    return 0;
}