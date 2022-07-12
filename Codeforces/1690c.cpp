#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> s(n), f(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        for(int i=1;i<n;i++)
        {
            s[i]=max(s[i],f[i-1]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<f[i]-s[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}