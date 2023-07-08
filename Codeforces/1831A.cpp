#include <bits/stdc++.h>
using namespace std;

// overloading operator<< and operator>> for vector
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto i : v)
        os << i << " ";
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &i : v)
        is >> i;
    return is;
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        cin >> a;
        for (int i = 0; i < n; i++)
        {
            a[i] = n+1-a[i];
        }
        cout << a << endl;
    }
    return 0;
}