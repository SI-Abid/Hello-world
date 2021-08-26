#include<stdio.h>
int main()
{
    int won=0;
    int t, n, k1, k2, i, j, a[100], b[100];
    scanf("%d",&t);
    while (t>0)
    {
        scanf("%d %d %d",&n,&k1,&k2);
        for (i=0;i<k1;i++)
        {scanf("%d",&a[i]);}
        for (j=0;j<k2;j++)
        {scanf("%d",&b[j]);}

        //check winner
        for (i=0;i<k1;i++)
        {
            if(a[i]==n)
            {
                won=1;
            }
        }
    if(won) printf("YES\n");
    else
        printf("NO\n");
    }
}
