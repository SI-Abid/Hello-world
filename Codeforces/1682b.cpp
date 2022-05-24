#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=(1<<30)-1;
        for (int i = 0; i < n; i++)
        {
            if(v[i]!=i)
            {
                ans&=v[i];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}