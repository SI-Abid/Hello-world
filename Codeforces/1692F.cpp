#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mod;
    for (auto &x : a)
    {
        cin >> x;
        mod[x % 10]++;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if ((i + j + k) % 10 == 3)
                {
                    if (i == j and mod[i] > 1 and mod[k] > 0)
                    {
                        puts("YES");
                        return;
                    }
                    if (i == k and mod[i] > 1 and mod[j] > 0)
                    {
                        puts("YES");
                        return;
                    }
                    if (k == j and mod[k] > 1 and mod[i] > 0)
                    {
                        puts("YES");
                        return;
                    }
                    if (i != j and j != k and mod[i] and mod[j] and mod[k])
                    {
                        puts("YES");
                        return;
                    }
                }
            }
        }
    }
    puts("NO");
}

signed main()
{
    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}