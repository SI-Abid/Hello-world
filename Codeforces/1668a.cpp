#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n<m) swap(n,m);
        if(m==1)
        {
            if(n<=2) cout<<n-1<<"\n";
            else    cout<<"-1\n";
            continue;
        }
        int ans=2*n-3;
        if((n+m)%2==0)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}