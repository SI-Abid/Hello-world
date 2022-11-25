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
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                i--;
                int c=0;
                c+=s[i]-'0';
                i--;
                c+=(10*(s[i]-'0'));
                ans+=char(c+'a'-1);
            }
            else
            {
                ans+=char(s[i]-'0'+'a'-1);
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}