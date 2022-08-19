#include<stdio.h>
int main()
{
    int n, i, B=0, C=0, ans;
    int a[100];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i] >= 0)
        {
            B += a[i];
        }
        else if (a[i] < 0)
        {
            C += a[i];
        }
    }

    ans = B - C;
    printf("%d",ans);

    return 0;
}
