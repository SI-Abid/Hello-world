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
    
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=i+1;
        }
        map<pair<int,int>,bool> mp;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            mp[{x,y}]=true;
            mp[{y,x}]=true;
        }
        vector<ll> ans;
        ll tmp=0;
        for(int i=0;i<n-1;i++)
        {
            if(mp[{v[i],v[i+1]}]==false)
            {
                tmp++;
            }
            else
            {
                ans.push_back(tmp+1);
                tmp=0;
            }
        }
        ans.push_back(tmp+1);
        ll sum=0;
        for(int i=0;i<ans.size();i++)
        {
            sum+=(ans[i]*(ans[i]+1))/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}