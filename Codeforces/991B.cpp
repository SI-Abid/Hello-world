#include<bits/stdc++.h>
using namespace std;
int a[100];
const double dela=0.000001;
int main()
{
    int n,sum=0,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        double num=(double)sum/(double)n;
        double cnt=4.500000;
        if(num<4.5)
        {
            sort(a+1,a+n+1);
            for(int i=1;i<=n;i++)
            {
                sum+=(5-a[i]);
                ans++;
                if((double)sum/(double)n>=4.5)
                    break;
            }
        }

        printf("%d\n",ans);
    return 0;
}
