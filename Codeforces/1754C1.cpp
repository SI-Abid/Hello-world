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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        if(pre[n-1]==n)
        {
            cout<<"1\n1 "<<n<<'\n';
            continue;
        }
        if(n==1)
        {
            cout<<"-1\n";
            continue;
        }
        
    }
    return 0;
}