#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    int64_t sum = 0;
    int potions = 0;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        sum += a;
        pq.push(a);
        potions++;

        while (sum < 0)
        {
            sum -= pq.top();
            pq.pop();
            potions--;
        }
    }

    cout << potions << '\n';
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