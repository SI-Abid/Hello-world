#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> a(7);
    for (auto &x : a)
        cin >> x;
    int i = 0;
    while (n > 0)
    {
        i %= 7;
        n -= a[i];
        i++;
    }
    cout << i;
    return 0;
}