#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string s(s1.size(),'0');
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])
        {
            s[i]='0';
        }
        else
        {
            s[i]='1';
        }
    }
    cout<<s;
    return 0;
}