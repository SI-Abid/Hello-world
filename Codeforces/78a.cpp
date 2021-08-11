#include "bits/stdc++.h"
using namespace std;

int main()
{
    string n;
    cin>>n;
    if(n=="1")
    {
        puts("0");
        return 0;
    }
    
    int x=0, sz=n.size(), cnt=0;

    for(int i=0; i<sz; i++)
    {
        x+=(n[i]-'0')<<(sz-1-i);
    }
    
    while(x>0)
    {
        if(x&1)
            x++;
        else
            x/=2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}