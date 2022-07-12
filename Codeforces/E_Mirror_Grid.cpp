#include<bits/stdc++.h>
using namespace std;

int check(char a, char b, char c, char d)
{
    int x = a - '0';
    int y = b - '0';
    int z = c - '0';
    int w = d - '0';
    if(x == y && y == z && z == w)
        return 0;
    else
        return min(x+y+z+w, 4-x-y-z-w);
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<string> grid(n);
        for(int i=0;i<n;i++)
        {
            cin>>grid[i];
        }
        int ans=0;
        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                ans+=check(grid[i][j], grid[j][n-i-1], grid[n-i-1][n-j-1], grid[n-j-1][i]);
            }
        }
        if(n&1)
        {
            for(int i=0;i<n/2;i++)
            {
                ans+=check(grid[i][n/2], grid[n-1-i][n/2], grid[n/2][i], grid[n/2][n-1-i]);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}