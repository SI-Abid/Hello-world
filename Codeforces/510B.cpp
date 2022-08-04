#include<bits/stdc++.h>
using namespace std;

// direction array
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool dfs(int u, int v, vector<vector<bool>> &vis, vector<string> &grid, int pi, int pj)
{

    vis[u][v] = true;

    for(int i = 0; i < 4; i++)
    {
        int x = u + dx[i];
        int y = v + dy[i];
        if(x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] == grid[u][v])
        {
            if(!vis[x][y])
            {
                if(dfs(x, y, vis, grid, u, v))
                {
                    return true;
                }
            }
            else if(x != pi and y != pj)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
    }
    vector<vector<bool>> vis(n, vector<bool>(m, false));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j])
            {
                if(dfs(i, j, vis, grid, -1,-1))
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}