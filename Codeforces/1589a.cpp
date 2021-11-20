#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long u,v;
        cin>>u>>v;
        if(u<v)
        {
            cout<<-u*u<<" "<<v*v<<endl;
        }
        else
        {
            cout<<u*u<<" "<<-v*v<<endl;
        }
    }
    return 0;
}