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
        string s;
        cin>>n>>s;
        map<char,int> m;
        int ans=0;
        for (char &c:s)
        {
            if(m.find(c)==m.end())
            {
                m[c]=1;
                ans++;
            }
            else
                m[c]++;
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}