#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        ll zero=0;
        ll one=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                ll tmp=0;
                while(i<n && s[i]=='0')
                {
                    tmp++;
                    i++;
                }
                zero=max(zero,tmp);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                ll tmp=0;
                while(i<n && s[i]=='1')
                {
                    tmp++;
                    i++;
                }
                one=max(one,tmp);
            }
        }
        ll oone=0;
        ll zzero=0;
        for (size_t i = 0; i < n; i++)
        {
            if(s[i]=='1')
            {
                oone++;
            }
            else
            {
                zzero++;
            }
        }
        
        ll ans=max({zero*zero,one*one,zzero*oone});
        cout<<ans<<endl;
    }
    return 0;
}