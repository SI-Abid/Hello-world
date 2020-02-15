#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a, i, j;
    for(a=1;a<=n;a++)
    {
    for(j=n;j>a;j--)
    {
        printf(" ");
    }
    for(i=1;i<=2*a-1;i++)
    {
        printf("*");
    }
    printf("\n");
    }

    for(a=n+1;a>=1;a--)
    {
    for(j=a;j<=n+1;j++)
    {
        printf(" ");
    }
    for(i=2*a-1;i>=5;i--)
    {
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
