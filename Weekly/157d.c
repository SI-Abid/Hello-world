#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char r[1000], b[1000];
        scanf("%s", r);
        scanf("%s", b);
        int red = 0, blue = 0;
        for (int i = 0; i < n; i++)
        {
            if (r[i] > b[i])
                red++;
            else if (r[i] < b[i])
                blue++;
        }
        if(red>blue)
            printf("RED\n");
        else if(red<blue)
            printf("BLUE\n");
        else
            printf("EQUAL\n");
    }
    return 0;
}