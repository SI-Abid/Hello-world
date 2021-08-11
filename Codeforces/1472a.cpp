#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w, h, n;
        cin>>w>>h>>n;
        int cnt=1;
        while(w%2==0)
        {
            w>>=1;
            cnt<<=1;
        }
        while(h%2==0)
        {
            h>>=1;   //    h/=2
            cnt<<=1; //    cnt*=2
        }
        puts((cnt>=n)?"YES":"NO");
    }
    return 0;
}