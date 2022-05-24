#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==2)
        {
            cout<<s.back()<<"\n";
        }
        else
        {
            sort(s.begin(),s.end());
            cout<<s[0]<<"\n";
        }
    }
    return 0;
}