#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        string a,b;
        cin>>n>>a>>b;
        map<char,int>ma,mb;
        for(int i=0;i<a.size();i++)
        {
            ma[a[i]]++;
        }
        for(int i=0;i<b.size();i++)
        {
            mb[b[i]]++;
        }
        bool flag=true;
        // compare both maps
        for(auto [key,value]:ma)
        {
            if(mb[key]!=value)
            {
                flag=false;
                break;
            }
        }
        if(flag==false)
        {
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                ma[a[i]]--;
                mb[b[i]]--;
                continue;
            }
            
        }
    }
    return 0;
}