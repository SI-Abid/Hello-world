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
        char c;
        string s;
        cin>>n>>c>>s;
        if(c=='g')
        {
            cout<<"0\n";
            continue;
        }
        s+=s;
        // n=s.size();
        vector<int>green;
        for(int i=0;i<2*n;i++)
        {
            if(s[i]=='g')
            {
                green.push_back(i);
            }
        }
        int ans = 0;
    
        // int lastGreen = -1;
        for (int i = 0; i < 2*n; i++)
        {
            if(s[i]==c)
            {
                // int l = lastGreen;
                auto r = upper_bound(green.begin(),green.end(),i);
                if(r==green.end())
                {
                    continue;
                }
                int rt = *r;
                // cout<<"--"<<r<<endl;
                ans=max(ans,rt-i);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}