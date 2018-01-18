#include<stdio.h>

int main()

{
    int n, i, arr[1000];
    printf("input n:");
    scanf("%d",&n);
    printf("taking input\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("showing output\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
