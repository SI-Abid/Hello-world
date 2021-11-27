#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 2 or argc == 3)
        freopen(argv[1], "r", stdin);
    if (argc == 3)
        freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n;

        vector<pair<long long, long long>> v;
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(make_pair(x, i + 1));
        }
        vector<long long> w(n + 1);
        sort(v.rbegin(), v.rend());
        long long ans = 0, cnt = 2, j = 1;
        w[0] = 0;

        for (auto pp : v)
        {
            long long pos = pp.second;
            long long vis = pp.first;
            w[pos] = (cnt / 2) * j;
            cnt++, j *= -1;
            ans += abs(w[pos] * vis * 2);
        }
        
        cout << ans << endl;
        for (long long i = 0; i <= n; i++)
        {
            cout << w[i] << " ";
        }
        cout << endl;
    }
    return 0;
}