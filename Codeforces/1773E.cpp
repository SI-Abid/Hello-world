#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

template <typename T, typename... Args>
void print(T arg, Args... args)
{
    cout << arg << ' ';
    if constexpr (sizeof...(args) > 0)
        print(args...);
    else
        cout << nl;
}

void solve()
{
    int n;
    cin >> n;
    int s = 0;
    while (n--)
    {
        int m;
        cin >> m;
        int x, y;
        cin >> x;
        for (int i = 0; i < m - 1; i++)
        {
            cin >> y;
            if (x > y)
                s++;
            swap(x, y);
        }
    }
    print(s, s + 1);
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}