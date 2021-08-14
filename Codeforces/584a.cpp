#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;  
    if(n<=m/10)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(m<10)
        for (int i = 0; i < n; i++)
        {
            cout<<m;
        }
    else
    {
        cout<<1;
        for (int i = 0; i < n-1; i++)
        {
            cout<<0;
        }
    }

    return 0;
}