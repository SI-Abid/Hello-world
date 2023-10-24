#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        vector<int> vec;
        if (a[i] == i + 1 or i == 0)
            v.push_back(0);
        else
        {
            int flag = 0;
            while (a[flag - 1] != i + 1)
                vec.push_back(a[flag]), flag++;
            v.push_back(flag);
            int l = 0, j = flag;
            for (int k = j; k <= i; k++, l++)
            {
                a[l] = a[k];
            }
            for (int k = l, l = 0; k <= i; k++, l++)
                a[k] = vec[l];
        }
    }
    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";
    cout << nl;;
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