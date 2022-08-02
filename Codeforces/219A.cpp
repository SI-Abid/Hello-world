#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    for (auto i:m)
    {
        if(i.second%k!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    string ans="";
    for(auto i:m)
    {
        for(int j=0;j<i.second/k;j++)
        {
            ans+=i.first;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<ans;
    }
    return 0;
}