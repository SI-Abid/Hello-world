#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
template <typename T>
istream &operator>>(istream &stream, vector<T> &v)
{
    for (auto &x : v)
    {
        stream >> x;
    }
    return stream;
}

int get_max(vector<int> &v, ll h, vector<int> &pow)
{
    int ans = 0;
    for (int i = 0; i < v.size();)
    {
        if (v[i] < h)
        {
            h += (v[i] / 2);
            ans++;
            i++;
        }
        else
        {
            if (!pow.empty())
            {
                h *= pow.back();
                pow.pop_back();
            }
            else
                break;
        }
    }
    return ans;
}

void solve()
{
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    cin >> a;
    sort(all(a));
    vector<int> x = {2, 2, 3};
    vector<int> y = {2, 3, 2};
    vector<int> z = {3, 2, 2};
    int ans = max({get_max(a, h, x), get_max(a, h, y), get_max(a, h, z)});
    cout << ans << nl;
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