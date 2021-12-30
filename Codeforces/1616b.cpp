#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ns="";
        ns+=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]<s[i-1])
            {
                ns+=s[i];
            }
            else if(s[i]==s[i-1] && s[i]<s[0])
            {
                ns+=s[i];
            }
            else
            {
                break;
            }
        }
        cout<<ns;
        reverse(ns.begin(),ns.end());
        cout<<ns<<endl;
    }
    return 0;
}