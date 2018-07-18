#include<stdio.h>
int main()
{
    int i, a;
    int b[16];
    printf("DEC: ");
    scanf("%d",&a);
    for(i=15;i>=0;i--)
    {
        b[i]=a%2;
        a=a/2;
    }
    printf("BIN: ");
    for(i=0;i<16;i++)
    {
    printf("%d",b[i]);
    }
    return 0;
}
