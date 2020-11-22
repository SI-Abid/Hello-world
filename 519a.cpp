#include "bits/stdc++.h"
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);

    string s[8], piece="KQBNRP\0";
    int w[6]={0,9,3,3,5,1};
    int p1=0, p2=0;
    for(int i=0; i<8; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            for(int k=0; k<6; k++)
            {
                if(toupper(s[i][j])==piece[k])
                {
                    (isupper(s[i][j]))? p1+=w[k] : p2+=w[k];
                    break;
                }
            }
        }
    }
    if(p1>p2)
    {
        puts("White");
    }
    else if(p1<p2)
    {
        puts("Black");
    }
    else
    {
        puts("Draw");
    }
    // cout<<p1<<" "<<p2<<endl;
    return 0;
}