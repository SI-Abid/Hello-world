#include<stdio.h>

int main()

{
    int n, i, a, b, c, d, e;
    printf("set of numbers:"); 
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
    {
         printf("input five numbers:");
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        //checking max
        printf("biggest number:");
        if(a>b&&a>c&&a>d&&a>e)
        {
            printf("%d ",a);
        }
        if(b>a&&b>c&&b>d&&b>e)
        {
            printf("%d ",b);
        }
        if(c>b&&c>a&&c>d&&c>e)
        {
            printf("%d ",c);
        }
        if(d>a&&d>b&&d>c&&d>e)
        {
            printf("%d ",d);
        }
        if(e>a&&e>b&&e>c&&e>d)
        {
            printf("%d ",e);
        }

        //checking minimum
        printf("smallest number:");
         if(a<b&&a<c&&a<d&&a<e)
        {
            printf("%d ",a);
        }
        if(b<a&&b<c&&b<d&&b<e)
        {
            printf("%d ",b);
        }
        if(c<b&&c<a&&c<d&&c<e)
        {
            printf("%d ",c);
        }
        if(d<a&&d<b&&d<c&&d<e)
        {
            printf("%d ",d);
        }
        if(e<a&&e<b&&e<c&&e<d)
        {
            printf("%d",e);
        }
        printf("\n");

    }
    return 0;

}
