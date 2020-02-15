//Codeforces round 546 div 2 A:Natsya is reading a book

#include<stdio.h>
int main()
{
    int n,k,i,p;
    scanf("%d",&n);
    int l[n],r[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&l[i],&r[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k>=l[i]&&k<=r[i])
        {
            p=n-i;
            break;
        }
    }
    printf("%d",p);
}
