#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        vector<string> vs(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>vs[i];
        }
        sort(vs.begin(),vs.end());
        int ans=INT_MAX;
        for (size_t i = 0; i < n-1; i++)
        {
            for (size_t k = i+1; k < n; k++)
            {
                int sum=0;
                for (size_t j = 0; j < m; j++)
                {
                    sum+=abs(vs[i][j]-vs[k][j]);
                }
                ans=min(ans,sum);
            
            }
            
        }
        cout<<ans<<'\n';
    }
    return 0;
}