#include <iostream>
#include <vector>
using namespace std;
#define nl "\n"
#define ll long long

template <typename Iterator, typename CheckFunction>
bool all(Iterator first, Iterator last, CheckFunction check)
{
    for (Iterator it = first; it != last; ++it)
    {
        if (!check(*it))
        {
            return false; // Custom check function returned false
        }
    }
    return true; // All elements passed the check
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    bool has5 = false;
    for (auto var : a)
    {
        has5 |= (var % 5) == 0;
    }
    if (has5)
    {
        for (auto &var : a)
        {
            if (var % 10 == 5)
                var += 5;
        }
        if (all(a.begin(), a.end(), [&](int x)
                { return x == a.front(); }))
            puts("Yes");
        else
            puts("No");
        return;
    }
    for (auto &var : a)
    {
        while (var % 10 != 2)
            var += var % 10;
    }
    for (auto &x : a)
    {
        x %= 20;
    }
    if (all(a.begin(), a.end(), [&](int x)
            { return x == a.front(); }))
        puts("Yes");
    else
        puts("No");
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