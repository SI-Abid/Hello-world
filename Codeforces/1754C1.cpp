#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        if(pre.back()&1)
        {
            cout<<"-1\n";
            continue;
        }
        vector<pair<int,int>> ans;
        for (int i = 0; i < n-1; i+=2)
        {
            if(a[i]==a[i+1])
            {
                ans.push_back({i+1,i+2});
            }
            else
            {
                ans.push_back({i+1,i+1});
                ans.push_back({i+2,i+2});
            }
        }
        cout<<ans.size()<<endl;
        for(auto x:ans)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
    return 0;
}