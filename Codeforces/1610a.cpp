#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(min(a,b)==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<ceil(max(a,b)/2.0) <<endl;
        }
    }
    return 0;
}