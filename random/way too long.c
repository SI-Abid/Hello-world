#include<stdio.h>
int main()
{
    int n, i, j, count;
    char ch[100];
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        count=0;
        scanf("%s",&ch);
        for(j=1;;j++)
        {
            if(ch[j]!='\0')
            {
                count++;
            }
            else break;
        }
        if(j>10)
        {
        printf("%c%d%c\n",ch[0],count-1,ch[j-1]);
        }
        else printf("%s\n",ch);
    }

    return 0;
}
