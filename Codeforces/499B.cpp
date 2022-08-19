#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    for(int i=0;i<m;i++)
    {
        string s;
        cin>>s>>mp[s];
    }
    while(n--)
    {
        string s;
        cin>>s;
        s.size()<=mp[s].size()?cout<<s<<" ":cout<<mp[s]<<" ";
    }
    return 0;
}