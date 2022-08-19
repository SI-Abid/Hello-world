#include<stdio.h>

int main()
{
    int i;
    char n[100];
    scanf("%s",&n);
    for(i=0;n[i]!='\0';i++)
    {
        if((n[i]==n[i+1])&&(n[i+1]==n[i+2])&&(n[i+2]==n[i+3])&&(n[i+3]==n[i+4])&&(n[i+4]==n[i+5])&&(n[i+5]==n[i+6]))
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
