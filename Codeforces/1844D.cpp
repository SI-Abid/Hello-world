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
        char c = 'a';
        if (n < 3)
        {
            for (int i = 0; i < n; i++)
            {
                cout << c++;
            }
            cout << endl;
            continue;
        }
        string ans = "";
        int lim;
        for (int i = 2; i < n; i++)
        {
            if (n % i != 0)
            {
                lim = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            ans += c;
            if (c == 'a' + lim - 1)
            {
                c = 'a';
            }
            else
            {
                c++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}