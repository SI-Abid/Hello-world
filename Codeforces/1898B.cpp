#include <iostream>
#include <vector>
using namespace std;

#define ll long long

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "[";
    for (auto vv : v)
    {
        os << vv << " ";
    }
    return os << "]";
}

int bisection(int &x, int y, int z)
{
    int lo = 1, hi = z;
    while (lo <= hi)
    {
        int mid = (hi + lo) / 2;
        double d = z / (double)mid;
        if (d > y)
            lo = mid + 1; // Fix the condition here
        else
            hi = mid - 1; // Fix the condition here
    }
    return lo;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 0;
    for (int i = n - 1; i > 0; i--)
    {
        int div = bisection(a[i - 1], a[i + 1], a[i]);
        a[i] /= div;
        ans += div;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    cout << ans << "\n";
}

int main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ", tc);
        solve();
    }
    return 0;
}
