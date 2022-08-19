#include<stdio.h>
int main()
{
    int i;
    char ch[100];
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]<97)
        {
            ch[i]+=32;
        }
        if(ch[i]!='a'&&ch[i]!='e'&&ch[i]!='i'&&ch[i]!='o'&&ch[i]!='u'&&ch[i]!='y')
        {
            printf(".%c",ch[i]);
        }
    }
}
