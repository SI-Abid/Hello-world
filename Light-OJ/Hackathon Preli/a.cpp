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
        map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mp[s[0]]++;
        }
        string ans="";
        for(auto [k,v]:mp)
        {
            if(v>=3)
            {
                ans+=k;
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}