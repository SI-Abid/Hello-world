#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<pair<int,int>> v;
        int j=n*3;
        for(int i=1;i<j;i+=3,j-=3)
        {
            v.push_back({i,j});
        }
        cout<<v.size()<<endl;
        for(auto x:v)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
    return 0;
}
/*
BANBANBABABABA
*/