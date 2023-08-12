#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(i + 1);
    }
    while (!dq.empty())
    {
        for (int i = 0; i < k - 1; i++)
        {
            if (dq.empty())
                break;
            cout << dq.back() << ' ';
            dq.pop_back();
        }
        if (dq.empty())
            break;
        cout << dq.front() << ' ';
        dq.pop_front();
    }

    cout << nl;
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