#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int dog=0,cat=0;
        if(x>a) dog=x-a;
        if(y>b) cat=y-b;
        if(dog+cat>c)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}