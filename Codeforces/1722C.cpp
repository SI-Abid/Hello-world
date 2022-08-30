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
        map<string,int> m;
        vector<vector<string>> v(3,vector<string>(n));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>v[i][j];
                m[v[i][j]]++;
            }
        }
        vector<int>ans(3,0);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(m[v[i][j]]==1)
                {
                    ans[i]+=3;
                }
                else if(m[v[i][j]]==2)
                {
                    ans[i]++;
                }
            }
        }
        for(auto x:ans)
        {
            cout<<x<<' ';
        }
        cout<<'\n';
    }
    return 0;
}