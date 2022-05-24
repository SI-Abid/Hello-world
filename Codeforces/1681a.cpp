#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m;cin>>m;
        vector<int> b(m);
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        if(*max_element(a.begin(),a.end())==*max_element(b.begin(),b.end()))
        {
            cout<<"Alice"<<"\n"<<"Bob"<<"\n";
            continue;
        }
        if(*max_element(a.begin(),a.end())<*max_element(b.begin(),b.end()))
        {
            cout<<"Bob"<<"\n";
            cout<<"Bob"<<"\n";
        }
        else
        {
            cout<<"Alice"<<"\n";
            cout<<"Alice"<<"\n";
        }
    }
    return 0;
}