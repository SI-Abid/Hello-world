#include<stdio.h>

int main()
{
    int i, n, t=0, a[1000], max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            t++;
        }
    }

    printf("%d\n",t);
    for(i=1;i<n;i++)
    {
        if(a[i]==1)
        {
            printf("%d ",a[i-1]);
        }
    }
    printf("%d",a[n-1]);
    return 0;
}
