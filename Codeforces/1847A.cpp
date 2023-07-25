#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        vector<int>p;
        for(int i=1;i<n;i++)
        {
            p.push_back(abs(v[i]-v[i-1]));
        }
        sort(p.begin(),p.end());
        int ans= accumulate(p.begin(),p.end(),0);
        for(int i=0;i<k-1;i++)
        {
            ans-=p.back();
            p.pop_back();
        }
        cout<<ans<<endl;
    }
    return 0;
}