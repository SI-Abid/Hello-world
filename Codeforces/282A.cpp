#include<stdio.h>
int main()
{
    int n, x=0, i, j;
    char s[5];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s",s);

        if((s[0]=='+')||(s[2]=='+'))
        {
            x++;
        }
        else if ((s[0]=='-')||(s[2]=='-'))
        {
            x--;
        }
    }
    printf("%d",x);
    return 0;
}
