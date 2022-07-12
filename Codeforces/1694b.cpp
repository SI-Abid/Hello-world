#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        long long ans=n;
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            while(i<n and s[i]=='0')
            {
                cnt++;
                i++;
            }
            if(i<n and s[i]=='1')
            {
                ans+=cnt;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int cnt=0;
            while(i<n and s[i]=='1')
            {
                cnt++;
                i++;
            }
            if(i<n and s[i]=='0')
            {
                ans+=cnt;
            }
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(v.empty())
                {
                    v.push_back(i);
                }
                else
                {
                    if(s[i-1]=='0')
                    {
                        v.push_back(i);
                    }
                }
            }
        }
        if(v.size()>1)
        {
            for(int i=1;i<v.size();i++)
            {
                ans+=i;
            }
        }
        cout<< ans<<endl;
    }
    return 0;
}