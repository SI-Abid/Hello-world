#include <stdio.h>
int func(int N, int H)
{
    int b=H/N;
    if(H%N!=0)
    {
        b++;
    }
    return b;
}

int main ()
{
    int  B,N,H,D, C, h, m, T1=0, T2=0, Hi, b;
    double dis=0,ans;

    scanf("%d %d",&h,&m);
    scanf("%d %d %d %d",&H,&D,&C,&N);

    if(h<20)
    {
        b=func(N,H);
        T1=b*C;
        // check if H/N is int or not
        Hi=(((20-h)*60)-m)*D;
        H=H+Hi;
        b=func(N,H);
        T2=b*C;
        dis = (T2*20)/100;
        T2=T2-dis;

        if(T1<=T2) ans = T1;

        else ans = T2;

    }
    else if(h>=20)
    {
        b=func(N,H);
        ans = b*C;
        dis = (ans * 20) / 100;
        ans = ans - dis;

    }
    printf("%.4lf",ans);
    return 0;
}
