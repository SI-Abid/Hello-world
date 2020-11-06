#include "bits/stdc++.h"
// #include "string.h"
#define MOD 1000000007
using namespace std;

int main()
{
    int n, x, pos, seg1=1, seg2=1;
    cin>>n>>x>>pos;
    
    for(int i=1; i<pos; i++)
    {
        seg1*=i;
        seg1%=MOD;
    }
    for(int i=1; i<=n-pos; i++)
    {
        seg2*=i;
        seg2%=MOD;
    }
    cout<<(seg1*seg2)%MOD<<endl;
    return 0;
}