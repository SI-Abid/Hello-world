#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,r;
        cin>>n>>r>>b;
        int k=r/(b+1);
        int x=r%(b+1);
        while(b--)
        {
            for (int i = 0; i < k; i++)
            {
                cout<<"R";
            }
            if(x)
            {
                cout<<"R";
                x--;
            }
            cout<<"B";
        }
        for (int i = 0; i < k; i++)
        {
            cout<<"R";
        }
        
        cout<<"\n";
    }
    return 0;
}