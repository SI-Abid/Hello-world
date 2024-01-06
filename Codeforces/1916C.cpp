#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int sub(int even, int odd)
{
    if (even + odd == 1)
        return 0;

    return odd / 3 + (odd % 3 == 1);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int64_t sum = 0;
    array<int, 2> counts = {0, 0};
    vector<int64_t> answers(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        counts[v[i] % 2]++;
        answers[i] = sum - sub(counts[0], counts[1]);
    }
    for (auto x : answers)
        cout << x << " ";
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