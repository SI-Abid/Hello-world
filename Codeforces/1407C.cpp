#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
int query(int a, int b)
{
    cout << "? " << a + 1 << ' ' << b + 1 << endl;
    int result;
    cin >> result;
    return result;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    vector<int> p(n, -1);
    while (idx.size() > 1)
    {
        int a = idx.back();
        idx.pop_back();
        int b = idx.back();
        idx.pop_back();
        int ab = query(a, b);
        int ba = query(b, a);
        if (ab > ba)
        {
            p[a] = ab;
            idx.push_back(b);
        }
        else
        {
            p[b] = ba;
            idx.push_back(a);
        }
    }
    p[idx.back()] = n;
    cout << "!";
    for (auto x : p)
        cout << " " << x;
    cout << nl;
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}