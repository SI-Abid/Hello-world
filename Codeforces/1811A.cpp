#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,d;cin>>n>>d;
        char c='0'+d;
        string s;cin>>s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]<c)
            {
                s.insert(i,1,c);
                break;
            }
        }
        if(s.size()==n) s+=c;
        cout<<s<<endl;
    }
    return 0;
}