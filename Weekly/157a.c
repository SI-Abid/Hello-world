#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans=n/4;
    if(n&1)
    {
        printf("0\n");
        return 0;
    }
    if(n%4==0)
        ans--;
    printf("%d\n",ans);
    return 0;
}