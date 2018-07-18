#include<stdio.h>
#include<math.h>
int main()
{
    int bin,dec=0,i;
    printf("BIN: ");
    scanf("%d",&bin);
    for(i=0;bin>0;i++)
    {
        dec+=(bin%10)*pow(2,i);
        bin/=10;
    }
    printf("DEC: %d",dec);
    return 0;
}
