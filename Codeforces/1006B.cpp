#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i] << " ";
    }
    return os;
}

signed main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mx = max(mx, x);
        a.push_back({x, i});
    }
    if (k == 1)
    {
        cout
            << mx << "\n"
            << n << "\n";
        return 0;
    }
    sort(a.rbegin(), a.rend());
    vector<int> ans;
    int i = 0;
    int cur = n;
    int res = 0;
    while (ans.size() < k and i < n)
    {
        auto [x, id] = a[i++];
        res+=x;
        ans.push_back(id);
    }
    sort(ans.begin(),ans.end());
    ans.push_back(n);
    int st=0;
    cout<<res<<endl;
    for (int i = 1; i <= k; i++)
    {
        cout<<ans[i]-st<<" ";
        st=ans[i];
    }
    // cout<<ans;
    return 0;
}