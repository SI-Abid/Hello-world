#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    char cr;
    string sk="";

    for(int i=0;i<k;i++)
    {
        cin>>cr;
        sk+=cr;
    }
    vector<long long> grps;
    long long cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(find(sk.begin(),sk.end(),s[i])!=sk.end())
        {
            cnt++;
        }
        else
        {
            grps.push_back(cnt);
            cnt=0;
        }
    }
    grps.push_back(cnt);
    long long ans=0;
    for (auto x:grps)
    {
        if(x)
        {
            // cout<<x<<endl;
            ans+=(x*(x+1))/2;
        }
    }
    cout<<ans<<endl;
    return 0;
}