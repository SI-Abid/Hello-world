#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0;i<3;i++)
        {
            a+=s[i]-'0';
        }
        for(int i=3;i<6;i++)
        {
            b+=s[i]-'0';
        }
        if(a==b)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}