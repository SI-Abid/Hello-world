#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<vector<long long>> a(n, vector<long long>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    long long mini = INT_MAX;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
            if (i + j == n - 1)
            {
                mini = min(mini, a[i][j]);
            }
        }
    }
    cout << sum - mini << endl;
    return 0;
}