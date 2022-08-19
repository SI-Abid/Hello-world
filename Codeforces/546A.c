#include<stdio.h>
int main()
{
    int i,n,k,w,t=0,l;
    scanf("%d %d %d",&k,&n,&w);
    for (i=1;i<=w;i++)
    {
        t+=k*i;
    }
    if (n>t)
        printf("0");
    else
        printf("%d",t-n);
    return 0;
}
