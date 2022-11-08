#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(v[0]== *min_element(v.begin(),v.end()))
        {
            cout<<"bOb"<<endl;
            continue;
        }
        cout<<"aLiCe"<<endl;
    }
    return 0;
}