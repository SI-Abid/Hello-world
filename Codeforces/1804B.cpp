#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, k, d, w;
        cin >> n >> k >> d >> w;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        int i, j;
        i = 0;
        while (i < a.size())
        {
            int nxt = a[i] + w + d;
            // cout << a[i] << ',' << nxt << endl;
            // find the next person who will be vaccinated in the next cycle
            auto jj = upper_bound(a.begin(), a.end(), nxt);
            // if person not present we take all the remaining persons
            if (jj == a.end())
            {
                j = a.size();
            }
            else
            {
                j = jj - a.begin();
            }
            int cnt = j - i;
            // at least one box of vaccine will be used
            int an = max(1, (cnt / k));
            ans+=an;
            // lets skip the persons already vaccinated
            i += min(cnt,an*k);
        }
        cout << ans << endl;
    }
    return 0;
}