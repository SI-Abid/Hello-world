#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,d;
        cin>>n>>d;
        vector<int> v(n);
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        int ans=0;
        int x=d-1-v.back();
        for(int i=0;i<min(*max_element(v.begin(),v.end()),n);i++)
        {
            if(m[i]==0)
            {
                ll dif=i-v.back();
                if(dif<0)
                {
                    dif+=d;
                }
                ans+=dif;
                i+=dif;
            }
        }
    }
    return 0;
}