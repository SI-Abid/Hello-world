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
    
        string s; int w;
        cin>>s>>w;
        string tmp = s;
        sort(tmp.rbegin(),tmp.rend());
        map<char,int> mp;
        int cost = 0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            cost+=s[i]-96;
        }
        int i=0;
        while(cost>w)
        {
            char c = tmp[i++];
            mp[c]--;
            cost-=(c-96);
        }
        for(auto x: s)
        {
            if(mp[x]>0)
            {
                cout<<x;
                mp[x]--;
            }
        }
        cout<<'\n';
    }
    return 0;
}