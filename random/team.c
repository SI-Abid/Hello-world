#include<stdio.h>
int main()
{
    int i,n, a[1000],b[1000],c[1000],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]==1 && b[i]==1)||(b[i]==1&&c[i]==1)||(a[i]==1&&c[i]==1))
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
