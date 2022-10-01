#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> d(n);
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        vector<int> a;
        a.push_back(d[0]);
        for(int i=1;i<n;i++)
        {
            if(d[i] and a.back()-d[i]>=0)
                break;
            a.push_back(d[i]+a.back());
        }
        if(a.size()==n)
        for(auto x:a)
            cout<<x<<" ";
        else
        {
            cout<<"-1";
        }
        cout<<"\n";
    }
    return 0;
}