#include<stdio.h>

int main()

{
    int n, i, a, b, c, d, e;
    scanf("%d\n",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        //checking max

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

    }
    return 0;

}
