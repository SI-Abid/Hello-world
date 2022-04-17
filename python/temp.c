#include<stdio.h>
int main(int argc, char const *argv[])
{
    if(argc>=2)
    {
        freopen(argv[1],"r",stdin);
        if(argc==3)
        {
            freopen(argv[2],"w",stdout);
        }
    }
    char str[1000];
    while(scanf("%s",str)!=EOF)
    {
        printf("%s\n",str);
    }
    puts("Hello World!");
    return 0;
}
