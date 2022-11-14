#include<bits/stdc++.h>
using namespace std;

signed main()
{
    FILE *f1=fopen("input.txt","w");
    FILE *f2=fopen("output.txt","w");
    int n=100000;
    int x=rand()%200000000-100000000;
    int y=rand()%200000000-100000000;
    fprintf(f1,"%d %d %d\n",n,x,y);
    while(n--)
    {
        int a=rand()%200000000-100000000;
        int b=rand()%200000000-100000000;
        fprintf(f1,"%d %d\n",a,b);
        if((a+b)%2==(x+y)%2)
        {
            fputs("gese gi\n",f2);
        }
        else
        {
            fputs("jaito na\n",f2);
        }
    }
    return 0;
}