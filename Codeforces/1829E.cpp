#include<bits/stdc++.h>
using namespace std;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

void dfs(int i, int j, vector<vector<int>> &grid, vector<vector<bool>> &vis, int &cnt)
{
    vis[i][j]=true;
    cnt+=grid[i][j];
    for(int k=0;k<4;k++)
    {
        int x=i+dx[k];
        int y=j+dy[k];
        if(x>=0 and x<grid.size() and y>=0 and y<grid[0].size() and grid[x][y]!=0 and !vis[x][y])
        {
            dfs(x,y,grid,vis,cnt);
        }
    }
}

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        vector<vector<int>> grid(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
            }
        }
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0 and !vis[i][j])
                {
                    int cnt=0;
                    dfs(i,j,grid,vis,cnt);
                    ans=max(ans,cnt);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}