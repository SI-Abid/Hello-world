#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        int x1,x2,y1,y2;
        x1=y1=x2=y2=0;
        vector<pair<int,int>> v(n);
        int dx=1,dy=1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
            dx&=v[i].first==0;
            dy&=v[i].second==0;
        }
        
        for(auto i:v)
        {
            int x=abs(i.first);
            int y=abs(i.second);
            x1=min(x1,x);
            x2=max(x2,x);
            y1=min(y1,y);
            y2=max(y2,y);
        }
        if(dy)
        {
            long long ans = 2*min(x1,x2)+max(x1,x2);
            cout<<ans<<endl;
            continue;
        }
        if(dx)
        {
            long long ans = 2*min(y1,y2)+max(y1,y2);
            cout<<ans<<endl;
            continue;
        }
        long long ans=0;
        ans+=x1;
        ans+=x2;
        ans+=y1;
        ans+=y2;
        ans*=2;
        cout<<ans<<endl;
    }
    return 0;
}