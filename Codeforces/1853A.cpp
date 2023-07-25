#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(!is_sorted(a.begin(),a.end()))
        {
            cout<<"0\n";
            continue;
        }
        int mindiff=1e9;
        for(int i=1;i<n;i++)
        {
            mindiff=min(mindiff,a[i]-a[i-1]);
        }
        cout<< (mindiff/2)+1 <<"\n";
    }
    return 0;
}