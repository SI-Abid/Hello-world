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
        int c; cin>>c;
        vector<int> v(101,0);
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v[x]++;
        }
        long long ans=0;
        for(int i=1;i<=100;i++)
        {
            if(v[i]!=0)
            {
                ans+=min(v[i],c);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}