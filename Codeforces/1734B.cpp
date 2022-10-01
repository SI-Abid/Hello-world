#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n; cin>>n;
        vector<vector<bool>> v(n);
        for(int i=0;i<n;i++)
        {
            v[i].resize(i+1,false);
            v[i][0]=v[i][i]=true;
        }
        // print v
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}