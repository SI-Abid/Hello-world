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
        int grp=n-1;
        int set=k/grp;
        int rem=k%grp;
        // cout<< grp << " " << set << " " << rem << endl;
        int ans = set*(grp+1) + rem;
        if(rem==0)
        {
            ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}