#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long val=0;
        long long maxVal=0;
        vector<pair<long long,long long>> opPos;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='R')
            {
                val+=(n-i-1);
                if(i>=n/2)
                    opPos.push_back({i,n-i-1});
            }
            else
            {
                val+=i;
                if(i<n/2)
                    opPos.push_back({n-i-1,i});
            }
            // cout<<val<<' ';
            maxVal+=(i<n/2?n-i-1:i);

        }
        // cout<<'\n';
        sort(opPos.begin(),opPos.end());
        vector<long long>ans;
        while(!opPos.empty())
        {
            auto x=opPos.back();
            opPos.pop_back();
            val+= x.first-x.second;
            ans.push_back(val);
        }
        while (ans.size()<n)
        {
            ans.push_back(maxVal);
        }
        for(auto x:ans)
        {
            cout<<x<<' ';
        }
        cout<<'\n';
    }
    return 0;
}