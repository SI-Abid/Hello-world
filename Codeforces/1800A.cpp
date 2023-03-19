#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;string s;
        cin>>n>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string ans="";
        ans+=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                ans+=s[i];
            }
        }
        // cout<<ans<<endl;
        cout<<(ans=="meow"?"YES":"NO")<<endl;
    }
    return 0;
}