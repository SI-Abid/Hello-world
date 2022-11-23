#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> v(n);
        int one = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        vector<int> b=v;
        ll ans2 = 0;
        ll ans = 0;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]==1)
            {
                cnt++;
            }
            else
            {
                ans += cnt;
            }
        }
        ans2=max(ans2, ans);
        cnt=0;
        ans=0;
        for (size_t i = 0; i < n; i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(v[i]==1)
            {
                cnt++;
            }
            else
            {
                ans += cnt;
            }
        }
        ans2=max(ans2, ans);
        cnt=0;
        ans=0;
        for (int i = n - 1; i >= 0; i--)
        {
            if(b[i]==1)
            {
                b[i]=0;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(b[i]==1)
            {
                cnt++;
            }
            else
            {
                ans += cnt;
            }
        }
        ans2=max(ans2, ans);
        cout<< ans2 <<'\n';
    }
    return 0;
}