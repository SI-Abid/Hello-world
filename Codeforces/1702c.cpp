#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    #endif

    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,k;
        cin>>n>>k;
        map<int,pair<int,int>> mp;
        //  key,    low, high
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(mp.find(x)==mp.end())
            {
                mp[x]={i,i};
            }
            else
            {
                mp[x].first=min(mp[x].first,i);
                mp[x].second=max(mp[x].second,i);
            }
        }
        while(k--)
        {
            int a, b;
            cin>>a>>b;
            if(mp.find(a)==mp.end() || mp.find(b)==mp.end())
            {
                cout<<"NO\n";
                continue;
            }
            int low = mp[a].first;
            int high = mp[b].second;
            if(low<high)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    
    }
    return 0;
}