#include<stdio.h>
int squarefree(int n)
{
    int i;
    if (n%2==0)
        n=n/2;
    if (n%2==0)
        return 0;
    for (i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
        {
            n/=i;
            if(n%i==0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(squarefree(n))
    {
        printf("The number is square free");
    }
    else
    {
        printf("The number has a square");
    }
    return 0;
}
