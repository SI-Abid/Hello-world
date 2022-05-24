#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int sum=0;
        for(auto [k,v]:m)
        {
            sum+=v*(k-'a'+1);
        }
        if(n%2==0)
        {
            cout<<"Alice "<<sum<<"\n";
            continue;
        }
        else if(n==1)
        {
            cout<<"Bob "<<sum<<"\n";
            continue;
        }
        sum=0;
        int last=s[n-1]-'a'+1;
        for(int i=0;i<n-1;i++)
        {
            sum+=s[i]-'a'+1;
        }
        if(s[0]<s[n-1])
        {
            sum-=s[0]-'a'+1;
            sum+=s[n-1]-'a'+1;
            last=s[0]-'a'+1;
        }
        cout<<"Alice "<<sum-last<<"\n";
    }
    return 0;
}