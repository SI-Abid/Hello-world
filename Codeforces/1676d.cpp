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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ll tmp=0;
                // sum of diagonals
                for(int k=0;k<min(n,m);k++)
                {
                    if(i+k<n && j+k<m)
                    {
                        tmp+=a[i+k][j+k];
                    }
                }
                for(int k=1;k<min(n,m);k++)
                {
                    if(i-k>=0 && j-k>=0)
                    {
                        tmp+=a[i-k][j-k];
                    }
                }
                for(int k=1;k<min(n,m);k++)
                {
                    if(i+k<n && j-k>=0)
                    {
                        tmp+=a[i+k][j-k];
                    }
                }
                for(int k=1;k<min(n,m);k++)
                {
                    if(i-k>=0 && j+k<m)
                    {
                        tmp+=a[i-k][j+k];
                    }
                }
                // cout<< i << " , " << j << " : " << tmp << "\n";
                ans=max(ans,tmp);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}