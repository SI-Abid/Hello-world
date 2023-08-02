#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    map<int, int> a, b, cnt;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x] = i;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[x] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        int x = (a[i] - b[i] + n) % n;
        cnt[x]++;
    }
    auto ans = *max_element(cnt.begin(), cnt.end(), [](auto &p1, auto &p2) { return p1.second < p2.second; });
    cout << ans.second << endl;
    return 0;
}