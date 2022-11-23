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
        string s;
        cin>>s;
        char c = *max_element(s.begin(), s.end());
        int ans = c-'a'+1;
        cout<<ans<<'\n';
    
    }
    return 0;
}