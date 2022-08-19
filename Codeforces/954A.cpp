#include<stdio.h>
int main()
{
    int i,n;
    char ch[101];
    scanf("%d",&n);

    scanf("%s",&ch);

    for(i=0;ch[i]!='\0';i++)  //condition is not i<n caz n will be decreased
    {
        if(ch[i]=='R' && ch[i+1]=='U')
        {
            n--;
            i++;
        }
        else if(ch[i]=='U' && ch[i+1]=='R')
        {
            n--;
            i++;
        }
    }
    printf("%d",n);
    return 0;
}
