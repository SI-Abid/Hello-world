#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=0;
        for (int i = 0; i < k; i++)
        {
            if(v[i]>k)
            {
                ans++;
            }
        }
        cout<<ans<<'\n';
    
    }
    return 0;
}