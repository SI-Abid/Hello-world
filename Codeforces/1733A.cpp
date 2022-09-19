#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        // ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            // sum+=v[i];
        }
        vector<int> ans(k,0);
        for (int i = 0; i < n; i++)
        {
            ans[i%k]=max(ans[i%k],v[i]);
        }
        ll sum = accumulate(ans.begin(), ans.end(), 0LL);
        cout<<sum<<'\n';
    }
    return 0;
}