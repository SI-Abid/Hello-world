#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    if(argc==2)
    {
        freopen(argv[1],"r",stdin);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        pair<int,int> x,y;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(s[i][j]=='R')
                {
                    x = {i,j};
                    break;
                }
            }
        }
        for (int j = 0; j < m; j++) //3
        {
            for (int i = 0; i < n; i++) //1
            {
                if(s[i][j]=='R')
                {
                    y = {i,j};
                    break;
                }
            }
        }
        cout<<x.first<<" "<<x.second<<" , "<<y.first<<" "<<y.second<<endl;
        if(x==y)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}