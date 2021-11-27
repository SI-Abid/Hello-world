#include<bits/stdc++.h>
using namespace std;

float fun1(float n)
{
    return 1/sqrt(n);
}

float fun2(float n)
{
    long i;
    float x2, y;
    const float threehalfs = 1.5F;

    x2 = n * 0.5F;
    y = n;
    i = * (long *) &y;
    i = 0x5f3759df - ( i >> 1 );
    y = * (float *) &i;
    y = y * ( threehalfs - ( x2 * y * y ) );
    y = y * ( threehalfs - ( x2 * y * y ) );

    return y;
}

int main()
{
    
    time_t s,t1,t2;

    s=time(NULL);

    long long iter = 1000000000;

    for (long long i = 0; i < iter; i++)
    {
        fun1(7);
    }

    t1=time(NULL);

    for (long long i = 0; i < iter; i++)
    {
        fun2(7);
    }
    
    t2=time(NULL);

    cout<<t1-s<<endl<<t2-t1<<endl;
    
    cout<<time(NULL)<<endl;

    return 0;
}


