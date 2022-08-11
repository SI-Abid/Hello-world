#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n),a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
    }
    sort(h.begin(), h.end());
    sort(a.begin(), a.end());
    int ans = 0;
    for(auto x:h)
    {
        auto it = lower_bound(a.begin(), a.end(), x);
        auto jt = upper_bound(a.begin(), a.end(), x);
        if(it==a.end())
        {
            continue;
        }
        ans += jt-it;
    }
    cout << ans << endl;
    return 0;
}