#include<stdio.h>
int main()
{
    char* labels[]={"zero","one","two","there","four","five","six","seven","eight","nine"};
    int a, b;
    scanf("%d%d",&a,&b);
    int i;
    for(i=a;i<=b; i++)
    {
        if(i<10)
        {
            puts(labels[i]);
        }
        else
        {
            puts(i&1?"odd":"even");
        }
    }
    return 0;
}