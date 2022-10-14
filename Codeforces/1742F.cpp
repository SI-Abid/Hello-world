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
        size_t s = 0, t = 0;
        bool ss = true, tt = true;
        while (n--)
        {
            int c, k;
            string x;
            cin >> c >> k >> x;
            if (c == 1)
            {
                s += (k * x.size());
                if (ss)
                    for (char cc : x)
                        if (cc != 'a')
                        {
                            tt = false;
                            break;
                        }
            }
            else
            {
                t += (k * x.size());
                if (ss)
                    for (char cc : x)
                        if (cc != 'a')
                        {
                            ss = false;
                            break;
                        }
            }
            if (!ss)
                puts("YES");
            else if (!tt)
                puts("NO");
            else if (s < t)
                puts("YES");
            else
                puts("NO");
        }
    }
    return 0;
}