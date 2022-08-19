#include<stdio.h>
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    while(n>0)
    {
        if(n%100==0)
        {
            ans++;
            n-=100;
        }
        else if(n%20==0)
        {
            ans++;
            n-=20;
        }
        else if(n%10==0)
        {
            ans++;
            n-=10;
        }
        else if(n%5==0)
        {
            ans++;
            n-=5;
        }
        else if(n%1==0)
        {
            ans++;
            n-=1;
        }
    }
    printf("%d",ans);
    return 0;
}
