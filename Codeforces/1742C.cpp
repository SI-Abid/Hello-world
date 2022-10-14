#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        vector<vector<char>> a(8,vector<char>(8));
        char cell;
        bool red_full=false;
        bool blue_full=false;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<8;i++)
        {
            // check for red full row
            if(a[i][0]=='R' and a[i][1]=='R' and a[i][2]=='R' and a[i][3]=='R' and a[i][4]=='R' and a[i][5]=='R' and a[i][6]=='R' and a[i][7]=='R')
            {
                red_full=true;
            }
        }
        for (int i = 0; i < 8; i++)
        {
            // check for blue full column
            if(a[0][i]=='B' and a[1][i]=='B' and a[2][i]=='B' and a[3][i]=='B' and a[4][i]=='B' and a[5][i]=='B' and a[6][i]=='B' and a[7][i]=='B')
            {
                blue_full=true;
            }
        }
        
        if(red_full)
        {
            cell='R';
        }
        if(blue_full)
        {
            cell='B';
        }
        cout<<cell<<endl;
    }
    return 0;
}