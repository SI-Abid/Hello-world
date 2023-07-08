#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!="codeforces"[i]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}