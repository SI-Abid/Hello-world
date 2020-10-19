#include "bits/stdc++.h"
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    int t;
    for(cin>>t;t;t--)
    {
        int a, b;
        cin>>a>>b;
        a=ceil(abs(a-b)/10.0);
        cout<<a<<endl;
    }
    return 0;
}