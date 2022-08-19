#include<stdio.h>
#define MOD 998244353

int main()
{
    long long fac[1000];
    fac[0]=1;
    for(int i=1;i<1000;i++)
        fac[i]=fac[i-1]*i%MOD;
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n&1)
        {
            printf("0\n");
            continue;
        }
        printf("%lld\n",fac[n/2]*fac[n/2]%MOD);
    }
    return 0;
}