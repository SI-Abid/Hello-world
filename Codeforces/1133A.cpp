#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,t1,t2,mid;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
	t1=(h1*60)+m1;
	t2=(h2*60)+m2;
	mid=(t1+t2)/2;
	if(mid/60<10) printf("0");
	printf("%d:",mid/60);
	if(mid%60<10) printf("0");
	printf("%d",mid%60);
    return 0;

}
