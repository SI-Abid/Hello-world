#include <stdio.h>
#include <string.h>
int vis[100][100];
char a[100][100];
int n;
int m;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int x, int y)
{
    vis[x][y] = 1;
    int i;
    for (i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx && nx < n && 0 <= ny && ny < m && vis[nx][ny] == 0 && a[nx][ny] == 'B')
        {
            vis[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}
signed main()
{
    scanf("%d%d", &n, &m);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf(" %c", &a[i][j]);
        }
    }
    memset(vis, 0, sizeof vis);

    int ans = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == 'B' && vis[i][j] == 0)
            {
                ans++;
                dfs(i, j);
                // printf("%d %d\n",i,j);
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}