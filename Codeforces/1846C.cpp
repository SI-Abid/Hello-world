#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template <typename T, typename... Args>
void print(T arg, Args... args)
{
    cout << arg << ' ';
    if constexpr (sizeof...(args) > 0)
        print(args...);
    else
        cout << '\n';
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, m, h;
        cin >> n >> m >> h;
        vector<pair<int, ll>> p(n);
        for (int i = 0; i < n; i++)
        {
            vector<int> v(m);
            for (int j = 0; j < m; j++)
                cin >> v[j];
            sort(v.begin(), v.end());
            ll penalty = 0, time = 0;
            int cnt = 0;
            for (int j = 0; j < m; j++)
            {
                time += v[j];
                // print("TIME",time);
                if (time <= h)
                {
                    penalty += time;
                    cnt++;
                }
                if (time > h or j == m - 1)
                {
                    p[i] = {cnt, penalty};
                    break;
                }
            }
            // print(cnt,penalty);
        }
        pair<int, ll> target = p[0];
        // print("target", p[0].first, p[0].second);
        sort(p.begin(), p.end(), [](pair<int, ll> a, pair<int, ll> b)
             {
            if(a.first==b.first)return a.second<b.second;
            return a.first>b.first; });
        // for (auto [a, b] : p)
        // {
        //     print("score", a, b);
        // }
        int pos = lower_bound(p.begin(), p.end(), target, [](pair<int, ll> a, pair<int, ll> b)
                              {
            if(a.first==b.first)return a.second<b.second;
            return a.first>b.first; }) -
                  p.begin();
        cout << pos + 1 << endl;
    }
    return 0;
}