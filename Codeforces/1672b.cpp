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
        map<char,int> mp;
        bool ok=true;
        for(char c:s)
        {
            mp[c]++;
        }
        for (size_t i = 0; i < s.size()-1; i++)
        {
            if(s[i]==s[i+1] and s[i]=='B')
            {
                ok=false;
                break;
            }
        }
        if(mp['B']==0 or ok==false)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}