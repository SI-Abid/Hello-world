#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<vector<int>> a(n,vector<int>(10));
        for(int i=0;i<n;i++)
        {
            a[i][s[i]-'0']++;
        }
        vector<int> v;
        int nai=0;
        map<char,vector<int>> m;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                int cnt=1;
                while(i<n-1 && s[i]==s[i+1])
                {
                    cnt++;
                    i++;
                }
                v.push_back(cnt);
                m[s[i]].push_back(cnt); 
            }
        }
        ll ans = n*(n+1)/2;
        for (size_t i = 0; i < v.size(); i++)
        {
            
        }
        
    }
    return 0;
}