#include "bits/stdc++.h"
#include "string.h"
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int r;
        string a;
        cin>>a;
        r=((a[0]-'0')-1)*10;
        int l=a.size()+1;
        while(l--)
            r+=l;
        cout<<r<<endl;
    }
    return 0;
}