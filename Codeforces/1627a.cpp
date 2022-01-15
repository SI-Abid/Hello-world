#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,r,c, b=0;
        cin>>n>>m>>r>>c;
        bool row[n],col[m];
        char mat[n][m];
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='B')
                {
                    row[i]=1;
                    col[j]=1;
                    b++;
                }
            }
        }
        if(b==0)
        {
            cout<<"-1\n";
        }
        else if(mat[r-1][c-1]=='B')
        {
            cout<<"0"<<endl;
        }
        else if(row[r-1]==1 || col[c-1]==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
    return 0;
}