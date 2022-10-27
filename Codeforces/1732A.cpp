#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a(n);
        int gc;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0)
            {
                gc=a[i];
            }
            else
            {
                gc=__gcd(gc,a[i]);
            }
        }
        if(gc==1)
        {
            cout<<"0\n";
            continue;
        }
        int ans=0;
        for (int i = n - 1; i >= 0; i--)
        {
            if(__gcd(gc,__gcd((i+1),a[i]))==1)
            {
                ans=n-i;
                break;
            }
        }
        cout<<min(3,ans)<<'\n';
    }
    return 0;
}