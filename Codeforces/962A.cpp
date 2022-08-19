#include<stdio.h>

int main()
{
    int n,i,a=0;
    double t=0;
    int st[200000];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&st[i]);
        t=t+st[i];
    }

    for(i=0;i<n;i++)
    {
        a=a+st[i];
        if(a==t/2 || a>t/2)
        {
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}
