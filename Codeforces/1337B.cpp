#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t, a, b, c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        while(b--&&a>0)
        {
            if(a<a/2+10)
                break;
            a=a/2+10;
        }
        if(a>c*10)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
