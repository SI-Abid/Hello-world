#include "bits/stdc++.h"
using namespace std;
// bool isPrime(int n)
// {
//     for(int i=2;i*i<=n;i++)
//     {
//         if(n%i==0)
//             return false;
//     }
//     return true;
// }
int ld(int n)
{
    int d=0;
    for(int i=sqrt(n); i>1;i--)
    {
        if(n%i==0)
        {
            d=max(d,max(i,n/i));
        }
    }
    return d;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        // else if(isPrime(n))
        // {
        //     cout<<"1 "<<n-1<<endl;
        // }
        else
        {
            int ad = ld(n);
            if(ad==0)
                cout<<"1 "<<n-1<<endl;
            else
            {
                cout<<ad<<" "<<n-ad<<endl;
            }
        }
    }
    return 0;
}