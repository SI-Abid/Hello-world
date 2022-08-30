#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        bool shaped = true;
        vector<vector<char>>v(n,vector<char>(m));
        int stars = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>v[i][j];
                if(v[i][j]=='*')
                    stars++;
            }
        }
        // cout<<v<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(v[i][j]=='*')
                {
                    int cnt=0;
                    for (int k = 0; k < 8; k++)
                    {
                        int x = i+dx[k];
                        int y = j+dy[k];
                        if(x>=0 and x<n and y>=0 and y<m)
                        {
                            if(v[x][y]=='*')
                                cnt++;
                        }
                    }
                    if(cnt!=2)
                    {
                        shaped = false;
                        break;
                    }
                }
            }
            if(!shaped)
                break;
        }
        if(stars==0 or shaped)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    
    }
    return 0;
}