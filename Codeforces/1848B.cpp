#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto x : v)
        os << x << " ";
    return os;
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        vector<int> maxn(k + 1), maxn2(k + 1);
        vector<int> pos(k + 1, - 1);
        for (int i = 0; i < n; i++)
        {
            int dif = i - pos[a[i]];
            if (dif > maxn[a[i]])
            {
                maxn2[a[i]] = maxn[a[i]];
                maxn[a[i]] = dif;
                pos[a[i]] = i;
            }
            else if (dif > maxn2[a[i]])
            {
                maxn2[a[i]] = dif;
            }
            pos[a[i]] = i;
        }
        // cout<<col<<endl;
        for (int i = 1; i <= k; i++)
        {
            int dif = n - pos[i];
            if (dif > maxn[i])
            {
                maxn2[i] = maxn[i];
                maxn[i] = dif;
            }
            else if (dif > maxn2[i])
            {
                maxn2[i] = dif;
            }
        }
        // sort(col.rbegin(),col.rend());
        int ans = INT_MAX;
        for (int i = 1; i <= k; i++)
        {
            ans = min(ans, max((maxn[i] + 1) / 2, maxn2[i]));
        }

        cout << ans-1 << endl;
    }
    return 0;
}