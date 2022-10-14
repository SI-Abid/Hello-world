#include <bits/stdc++.h>
using namespace std;

signed main()
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
        vector<int> pre(n);
        pre[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        int ANS = n;
        vector<int> ans;
        int pos = 0;
        int sum = pre[0];
        for (int i = 0; i < n; i++)
        {
            if (pre[n - 1] % pre[i] == 0)
            {
                ans.push_back(i + 1);
                sum = pre[i];
                pos = i;
                for (int j = pos; j < n; j++)
                {
                    if (pre[j] - pre[pos] == sum)
                    {
                        ans.push_back(j - pos);
                        pos = j;
                    }
                }
                if(accumulate(ans.begin(),ans.end(),0)==n)
                {
                    ANS = min(ANS, (int)*max_element(ans.begin(), ans.end()));
                }
                    ans.clear();
            }
        }
        cout<<ANS<<"\n";
    }
    return 0;
}