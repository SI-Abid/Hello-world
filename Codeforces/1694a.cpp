#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>=b*2)
        {
            for (int i = 0; i < a/2; i++)
            {
                cout<<"0";
            }
            for (int i = 0; i < b; i++)
            {
                cout<<"1";
            }
            for (int i = a/2; i < a; i++)
            {
                cout<<"0";
            }
        }
        else if(b>=a*2)
        {
            for (int i = 0; i < b/2; i++)
            {
                cout<<"1";
            }
            for (int i = 0; i < a; i++)
            {
                cout<<"0";
            }
            for (int i = b/2; i < b; i++)
            {
                cout<<"1";
            }
        }
        else
        {
            if(a>b)
            {
                for(int i=0;i<min(a,b);i++)
                {
                    cout<<"01";
                }
                for(int i=min(a,b);i<a;i++)
                {
                    cout<<"0";
                }
            }
            else
            {
                for(int i=0;i<min(a,b);i++)
                {
                    cout<<"10";
                }
                for(int i=min(a,b);i<b;i++)
                {
                    cout<<"1";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}