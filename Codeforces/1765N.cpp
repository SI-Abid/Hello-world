#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;
        int k;
        cin>>s>>k;
        int n=s.size();
        vector<pair<char,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({s[i],i});
        }
        sort(v.begin(),v.end());
        string ans="";
        int last=-1;
        while(ans.size()<n-k and k>0)
        {
            if(ans.size())
            {
                for (int i = 0; i < 10; i++)
                {
                    auto it = lower_bound(v.begin(), v.end(), make_pair('0'+i, last));
                    if(it==v.end())
                    {
                        continue;
                    }
                    int move = it->second - ans.size();
                    if (move <= k)
                    {
                        ans += it->first;
                        k -= move;
                        // v.erase(it);
                        break;
                    }
                    last = it->second;
                }
            }
            else
            {
                for (int i = 1; i < 10; i++)
                {
                    auto it = lower_bound(v.begin(), v.end(), make_pair('0'+i, last));
                    if(it==v.end())
                    {
                        continue;
                    }
                    int move = it->second - ans.size();
                    if (move <= k)
                    {
                        ans += it->first;
                        k -= move;
                        // v.erase(it);
                        break;
                    }
                    last = it->second;
                }
            }
        }
        if(k==0 and ans.size()<n-k)
        {
            for(int i=last+1;i<n;i++)
            {
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}