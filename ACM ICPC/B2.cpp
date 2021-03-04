#include "bits/stdc++.h"
#define ll long long
#define check(i1,j1,i2,j2,i3,j3,c)  (s[i1][j1]==c&&s[i2][j2]==c&&s[i3][j3]==c)
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
        string s[3];
        cin>>s[0]>>s[1]>>s[2];
        int cntx=0,cntd=0;
        bool wonx=false, wond=false;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(s[i][j]=='X')
                    cntx++;
                // else if(s[i][j]=='.')
                //     cntd++;

        if(check(0,0,0,1,0,2,'X')) wonx=true;
        if(check(1,0,1,1,1,2,'X')) wonx=true;
        if(check(2,0,2,1,2,2,'X')) wonx=true;
        if(check(0,0,1,0,2,0,'X')) wonx=true;
        if(check(0,1,1,1,2,1,'X')) wonx=true;
        if(check(0,2,1,2,2,2,'X')) wonx=true;
        if(check(0,0,1,1,2,2,'X')) wonx=true;
        if(check(0,2,1,1,2,0,'X')) wonx=true;
        // cout<<cntx<<cntd<<wonx<<wond<<endl;

        cout<<"Game #"<<tt<<": ";
        if(wonx)
        {   
            if(cntx&1)
                puts("Alice");
            else 
                puts("Bob");
        }
        else if(cntx&1)
            puts("Bob");
        else
            puts("Alice");
        // puts("");
    }
    return 0;
}