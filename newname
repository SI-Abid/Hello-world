#include<stdio.h>

void name_loop(int n)
{
    int fib[100],x=0,y=1, i, j;
    char ch;

    for (i=0;i<2;i++)
    {
        fib[i]=i;
    }
    for (i=2;i<=n+5;i++)
    {
        fib[i]=x+y;
        x=y;
        y=fib[i];
    }
    for (j=1;j<=n;j++)
    {
        ch='o';
        for(i=2;i<n;i++)
        {
        if(j==fib[i])
        {
            ch=ch-32;
        }
        }
        printf("%c",ch);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    name_loop(n);
    return 0;
}
