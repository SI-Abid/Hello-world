#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    if(argc>1)
    {
        freopen(argv[1],"r",stdin);
    }
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        vector<ll> sum(n+1,0);
        for(int i=0;i<n;i++)
        {
            sum[i+1]=sum[i]+a[i];
        }
        int x;
        while(q--)
        {
            cin>>x;
            auto it=lower_bound(sum.begin(),sum.end(),x);
            if(it==sum.end())
            {
                cout<<"-1\n";
            }
            else
            {
                cout<<(it-sum.begin())<<"\n";
            }
        }
    }
    return 0;
}