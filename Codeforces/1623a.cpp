#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("in","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,rb,cb,rd,cd, dx,dy;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        if(rb<=rd)
        {
            dx=rd-rb;
        }
        else
        {
            dx=n-rb+n-rd;
        }
        if(cb<=cd)
        {
            dy=cd-cb;
        }
        else
        {
            dy=m-cb+m-cd;
        }
        cout<<min(dx,dy)<<endl;
    }
    return 0;
}