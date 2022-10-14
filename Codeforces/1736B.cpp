#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a(n);
        int min=-1;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i!=0)
            {
                if(a[i]>a[i-1] and a[i]%a[i-1]==0)
                {
                    flag=false;
                }
            }
        }
        if(flag==false)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        // ll prev=a[0];
        // cout<<prev<<" ";
        // for(int i=0;i<n;i++)
        // {
        //     prev=prev*a[i];
        //     cout<<prev<<" ";
        // }
        // cout<<"\n";
    }
    return 0;
}