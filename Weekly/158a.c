#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        scanf("%d",&a);
        puts((360%(180-a)==0)?"YES":"NO");
    }
    return 0;
}