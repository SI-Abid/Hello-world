#include<stdio.h>
int main()
{
    int i, n, m;
    scanf("%d",&m);
    for(n=1;n<=m;n++)
    {

        for(i=m-n;i>0;i--)
        {
            printf(" ");
        }
        for(i=1;i<=2*n-1;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(n=m;n>=1;n--)
    {
        for(i=n;i<=m;i++)
        {
            printf(" ");
        }
        for(i=2*n-1;i>=3;i--)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
