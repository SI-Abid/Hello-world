#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        string c=b;
        transform(c.begin(),c.end(),c.begin(),[](char x){return x=='0'?'1':'0';});
        if(a==b)
        {
            cout<<"YES\n";
            cout<<"0\n";
        }
        else if(a==c)
        {
            cout<<"YES\n";
            vector<pair<int,int>> ans;
            for (int i = 0; i < n; i++)
            {
                if(a[i]=='1')
                {
                    ans.push_back({i+1,i+1});
                }
            }
            
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}