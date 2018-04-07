#include<stdio.h>

int main()
{
    int a, i;
    char pos[100];

    scanf("%d",&a);

    scanf("%s",&pos);

    for(i=1 ; pos[i]!='\0' ; i++)
    {
        if ((pos[i]=='R' && pos[i+1]=='U') || (pos[i]=='U' && pos[i+1]=='R'))
        {
            a--;
            i++;
        }
    }
    printf("%d",a);

    return 0;
}
