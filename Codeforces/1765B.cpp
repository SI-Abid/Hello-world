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
        bool ok=true;
        for(int i=0,cnt=1;i<n;cnt++)
        {
            if(cnt&1)
            {
                i++;
            }
            else
            {
                if(s[i]!=s[i+1])
                {
                    ok=false;
                    break;
                }
                i+=2;
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}