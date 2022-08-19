#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(a[0]+a[1]<=a[n-1])
            printf("1 2 %d\n",n);
        else
            puts("-1");
    }
    return 0;
}