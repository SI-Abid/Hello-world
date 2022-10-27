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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;
        vector<char> ans(100,'0');
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(ans[a[i]]=='0')
            {
                ans[a[i]] = s[i];
            }
            else
            {
                if(ans[a[i]]!=s[i])
                {
                    flag=false;
                }
            }
        }
        if(flag)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}