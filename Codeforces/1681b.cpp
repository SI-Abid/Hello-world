#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int m;
        cin>>m;
        int mod=0;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin>>x;
            mod=(mod+x)%n;
        }
        cout<<v[mod]<<"\n";
    }
    return 0;
}