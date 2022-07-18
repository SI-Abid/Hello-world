#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i)
    {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]";
    return os;
}

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n & 1)
        {
            ll ans = 0;
            for (int i = 1; i < n; i += 2)
            {
                if (a[i] > max(a[i - 1], a[i + 1]))
                    continue;
                ans += abs(a[i] - max(a[i - 1], a[i + 1])) + 1;
            }
            cout << ans << '\n';
        }
        else
        {
            vector<ll> pre1, pre2;
            ll tmp = 0;
            for (int i = 1; i < n - 1; i += 2)
            {
                if (a[i] <= max(a[i - 1], a[i + 1]))
                    // continue;
                    tmp += abs(a[i] - max(a[i - 1], a[i + 1])) + 1;
                pre1.push_back(tmp);
            }
            tmp = 0;
            for (int i = n - 2; i >= 2; i -= 2)
            {
                if (a[i] <= max(a[i - 1], a[i + 1]))
                    // continue;
                    tmp += abs(a[i] - max(a[i - 1], a[i + 1])) + 1;
                pre2.push_back(tmp);
            }
            ll ans = min(pre1.back(), pre2.back());
            reverse(pre2.begin(), pre2.end());
            // cout<<pre1<<endl<<pre2<<endl;
            for (int i = 0; i < pre1.size() - 1; i++)
            {
                ans = min(ans, pre1[i] + pre2[i + 1]);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}