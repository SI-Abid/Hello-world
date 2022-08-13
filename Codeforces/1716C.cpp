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
        vector<vector<int>> v(2,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            cin>>v[0][i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v[1][i];
        }
        
    }
    return 0;
}