#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int lost = 0;
    for (auto c : s)
        if (c == 'L')
            lost++;
    int i = 0;
    int score = 0;
    vector<int> lose;
    while (i < n)
    {
        if (s[i] == 'W')
        {
            if (i > 0 and s[i - 1] == 'W')
                score += 2;
            else
                score++;
            i++;
            continue;
        }
        int j = i;
        while (j + 1 < n and s[j + 1] == 'L')
            j++;
        if (i != 0 and j != n - 1)
            lose.push_back(j - i + 1);
        i = j + 1;
    }
    if (score == 0)
    {
        for (size_t i = 0; i < k; i++)
        {
            if (i == 0)
                score++;
            else
                score += 2;
        }
    }
    else
    {
        score += 2 * min(lost, k);
        sort(lose.begin(), lose.end());
        int took = 0;
        for (auto x : lose)
        {
            if (took + x <= k)
            {
                took += x;
                score++;
            }
        }
    }
    cout << score << nl;
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