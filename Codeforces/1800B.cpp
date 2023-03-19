#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,k;string s;
        cin>>n>>k>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int ans=0;
        int spoiled_pair=0;
        for(char i='a';i<='z';i++)
        {
            int cnt1=mp[i];
            int cnt2=mp[toupper(i)];
            ans+=min(cnt1,cnt2);
            spoiled_pair+=(abs(cnt1-cnt2)/2);
        }
        ans+=min(spoiled_pair,k);
        cout<<ans<<endl;
    }
    return 0;
}