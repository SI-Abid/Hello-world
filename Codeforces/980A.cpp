#include<stdio.h>
int main()
{
    int p=0,l=0,i;
    char s[100];
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='o')
        {
            p++;
        }
        else if(s[i]=='-')
        {
            l++;
        }
    }
    if(p==0)
    {
        printf("yes");
    }
    else if(l%p==0)
    {
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}
