#include<stdio.h>
int main()
{
    int n, m, a;
    scanf("%d %d %d",&n,&m,&a);
    long long ans, b, c;
    b=n/a;
    if(n%a!=0)
    {
        b++;
    }
    c=m/a;
    if(m%a!=0)
    {
        c++;
    }
    ans=b*c;

    printf("%lld",ans);

    return 0;
}
