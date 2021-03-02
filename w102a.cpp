#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    for(cin>>t; t; t--)
    {
        int n, m;
        cin>>n>>m;
        int a[n], b[m];
        for(int i=0; i<n;i++)
            cin>>a[i];
        
        for(int i=0; i<m; i++)
            cin>>b[i];

        int cnt=0;
        for(auto x:a)
            for(auto y:b)
                if(x==y)
                    cnt++;
        
        cout<<cnt<<endl;
    }
    return 0;
}