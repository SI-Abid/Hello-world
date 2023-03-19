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
        int cur=1;
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            ans.push_back(cur);
            cur+=i;
            if(cur>k)
            {
                break;
            }
        }
        
        cout<<endl;
    }
    return 0;
}