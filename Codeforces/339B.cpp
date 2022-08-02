#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int t=1;
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=t)
        {
            ans+=v[i]-t;
            t=v[i];
        }
        else
        {
            ans+=m-t+v[i];
            t=v[i];
        }
    }
    cout<<ans;
    return 0;
}