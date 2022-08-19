#include<bits/stdc++.h>
using namespace std;

int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,-1,1,1};

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        vector<vector<char>> mat(n,vector<char>(m));
        int ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>mat[i][j],ans+=mat[i][j]-'0';

        bool ioto=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='0')
                {
                    for(int k=0;k<8;k++)
                    {
                        int x=i+dx[k],y=j+dy[k];
                        if(x>=0 and x<n and y>=0 and y<m and mat[x][y]=='0')
                        {
                            ioto=true;
                            break;
                        }
                    }
                    if(ioto)
                        break;
                }
            }
            if(ioto)
                break;
        }
        if(ans==n*m)
        {
            cout<<ans-2<<'\n';
            continue;
        }
        if(ioto)
        {
            cout<<ans<<'\n';
        }
        else
        {
            cout<<ans-1<<'\n';
        }
    }
    return 0;
}