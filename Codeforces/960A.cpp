#include<stdio.h>
int main()
{
    int i,a=0,b=0,c=0;
    char s[5000];
    scanf("%s",&s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' && b==0 && c==0)
        {
            a++;
        }
        else if(s[i]=='b' && a>0 && c==0)
        {
            b++;
        }
        else if(s[i]=='c' && a>0 && b>0)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    if ((c==a || c==b) && a!=0 && b!=0 && c!=0)
    {
        if(s[i-1]=='c' && s[i]=='\0')
        {
        printf("Yes");
        }
        else printf("No");
    }
    else printf("No");

    return 0;
}
