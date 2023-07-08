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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                a[i][j] = i * m + j + 1;

        vector<int> idx;
        for (int i = 0; i < n; i++)
            if (i % 2 == 0)
                idx.push_back(n / 2 + i / 2);
            else
                idx.push_back(i / 2);

        for(auto i:idx)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}