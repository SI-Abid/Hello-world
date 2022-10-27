#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,q;
        cin>>n>>q;
        vector<ll> a(n),pre(n),exor(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        pre[0]=a[0];
        exor[0]=a[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+a[i];
            exor[i]=exor[i-1]^a[i];
        }
        // for (size_t i = 0; i < n; i++)
        // {
        //     cout<<pre[i]<<" ";
        // }
        // cout<<endl;
        // for (size_t i = 0; i < n; i++)
        // {
        //     cout<<exor[i]<<" ";
        // }
        // cout<<endl;
        int l,r;
        cin>>l>>r;
        vector<ll> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=pre[i]-exor[i];
            // cout<<ans[i]<<'=';
        }
        // cout<<'\n';
        auto mx = max_element(ans.begin(),ans.end());
        int x=1,y=mx-ans.begin()+1;
        ll maxi=*mx;
        for (size_t i = 0; i < n; i++)
        {
            if(ans[i]>=maxi)
            {
                int xtra=ans[i]-maxi;
                auto it=lower_bound(pre.begin(),pre.begin()+i+1,xtra);
                // it--;
                if(it!=ans.end() and *it==xtra)
                {
                    int xx=it-pre.begin()+2;
                    int yy=i+1;
                    // cout<<xx<<" - "<<yy<<'\n';
                    if(yy-xx<y-x)
                    {
                        x=xx;
                        y=yy;
                    }
                }
            }
        }
        cout<<x<<' '<<y<<'\n';
    }    
    return 0;
}