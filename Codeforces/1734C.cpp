#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n; cin>>n;
        string s;
        cin>>s;
        s="="+s;
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++)
        {
            for (int x = i; x <= n; x+=i)
            {
                if(s[x]=='1')
                {
                    break;
                }
                if(v[x]==0)
                {
                    v[x]=i;
                }
            }
        }
        long long ans=accumulate(v.begin(),v.end(),0LL);
        cout<<ans<<endl;
    }
    return 0;
}