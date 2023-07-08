#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        map<int, int> aa, bb;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int tmp;
        for (int i = 0; i < n;)
        {
            int x = a[i];
            tmp = 0;
            while (i < n && a[i] == x)
            {
                i++;
                tmp++;
            }
            if (aa.find(x) == aa.end())
            {
                aa[x] = tmp;
            }
            else
            {
                aa[x] = max(aa[x], tmp);
            }
        }
        for (int i = 0; i < n;)
        {
            int x = b[i];
            tmp = 0;
            while (i < n && b[i] == x)
            {
                i++;
                tmp++;
            }
            if (bb.find(x) == bb.end())
            {
                bb[x] = tmp;
            }
            else
            {
                bb[x] = max(bb[x], tmp);
            }
        }
        // for(auto [k,v]:aa){
        //     cout<<k<<" "<<v<<endl;
        // }
        // for(auto [k,v]:bb){
        //     cout<<k<<" "<<v<<endl;
        // }
        int mx = 0;
        for (int i = 1; i <= n + n; i++)
        {
            mx = max(mx, aa[i] + bb[i]);
        }
        cout << mx << endl;
    }
    return 0;
}