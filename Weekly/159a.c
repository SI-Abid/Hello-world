#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a+b==c)
            puts("YES");
        else if(a+c==b)
            puts("YES");
        else if(b+c==a)
            puts("YES");
        else if(a==b && c%2==0)
            puts("YES");
        else if(a==c && b%2==0)
            puts("YES");
        else if(b==c && a%2==0)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}