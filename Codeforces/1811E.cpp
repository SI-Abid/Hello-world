#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        long long n;
        cin >> n;
        string s = "";
        while (n > 0)
        {
            int d = n % 9;
            if (d > 3)
                s += '0' + d + 1;
            else
                s += '0' + d;
            n /= 9;
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}