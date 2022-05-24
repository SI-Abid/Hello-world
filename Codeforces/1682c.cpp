#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        int f,s;
        f=s=0;
        for(auto [k,v]:m)
        {
            f+=v==1;
            s+=v>1;
        }
        cout<<s+(f+1)/2<<"\n";
    }
    return 0;
}