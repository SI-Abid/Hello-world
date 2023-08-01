#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;cin>>s;
        int suf0=0,suf1=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0') suf0++;
            else suf1++;
        }
        int ans=min(suf0,suf1);
        int pref0=0,pref1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') pref0++,suf0--;
            else pref1++,suf1--;
            ans=min(ans,pref1+suf0);
            ans=min(ans,pref0+suf1);
        }
        cout<<ans<<endl;
    }
    return 0;
}