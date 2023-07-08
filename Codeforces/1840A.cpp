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
        string s;
        cin>>s;
        string ans="";
        for(int i=0;i<n;i++)
        {
            ans+=s[i];
            do
            {
                i++;
            } while (i<n && s[i]!=ans.back());
        }
        cout<<ans<<endl;
    }
    return 0;
}