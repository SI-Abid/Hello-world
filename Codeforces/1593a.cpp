#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mx = max(a,max(b,c));
        if(a==mx && b==mx && c==mx)
        {
            cout<<"1 1 1"<<endl;
        }
        else if(!(a==mx ^ b==mx ^ c==mx))
        {
            cout<<(a==mx?1:mx-a+1);
            cout<<" ";
            cout<<(b==mx?1:mx-b+1);
            cout<<" ";
            cout<<(c==mx?1:mx-c+1);
            cout<<endl;
        }
        else
        {
            cout<<(a==mx?0:mx-a+1);
            cout<<" ";
            cout<<(b==mx?0:mx-b+1);
            cout<<" ";
            cout<<(c==mx?0:mx-c+1);
            cout<<endl;
        }
    }   
    
    return 0;
}