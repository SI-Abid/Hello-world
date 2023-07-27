#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "[";
    for (auto x : v)
        os << x << " ";
    os << "]";
    return os;
}
using ll = long long;
signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<ll> a(n);
        for (ll &x : a)
            cin >> x;
        ll ans1 = INT_MIN, ans2 = INT_MIN;
        for (int i = 0; i < n; i+=2)
        {
            if(i==0)
            {
                ans1 = a[i];
                continue;
            }
            ans1 = max({ans1, (ll)a[i], (ll)a[i] + ans1});
        }
        for (int i = 1; i < n; i+=2)
        {
            if(i==1)
            {
                ans2 = a[i];
                continue;
            }
            ans2 = max({ans2, (ll)a[i], (ll)a[i] + ans2});
        }
        ll ans = max(ans1, ans2);
        ans = max(ans, *max_element(a.begin(), a.end()));
        cout << ans << endl;
    }
    return 0;
}