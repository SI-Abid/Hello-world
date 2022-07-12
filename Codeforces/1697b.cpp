#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    vector<ll> sum(n);
    sum[0] = a[0];
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + a[i];
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x == n)
        {
            cout << sum[y - 1] << endl;
        }
        else
        {
            cout << sum[n - x - 1 + y] - sum[n - x - 1] << endl;
        }
    }
    return 0;
}