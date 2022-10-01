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
        vector<ll> pre(k);
        for(int i=0;i<k;i++)
        {
            cin>>pre[i];
        }
        if(k>1)
        {
            ll dif = pre[1]-pre[0];
            // if(n>k)
            for(int i=0;i<k;i++)
            {
                pre[i]-=(dif*(n-k));
            }
        }
        vector<ll> in(k);
        in[0]=pre[0];
        for(int i=1;i<k;i++)
        {
            in[i]=pre[i]-pre[i-1];
        }
        // for(int i=0;i<k;i++)
        // {
        //     cout<<in[i]<<" ";
        // }
        if(is_sorted(in.begin(), in.end()))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}