#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        string fs="WB", ss="BB";
        if(n==2 && m==2)
        {
            cout<<fs<<endl<<ss<<endl;
        }
        else
        {
            for(int i=0; i<m-2; i++)
            {
                fs+='B';
                ss+='B';
            }
            cout<<fs<<endl;
            n--;
            while(n--)
            {
                cout<<ss<<endl;
            }
        }
    }
    return 0;
}
