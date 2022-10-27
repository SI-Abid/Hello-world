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
        string s;
        cin>>n>>s;
        int q=0,a=0;
        bool ok=true;
        for(int i=0;i<n;)
        {
            while(i<n and s[i]=='Q')
            {
                q++;
                i++;
            }
            while(i<n and s[i]=='A')
            {
                a++;
                i++;
            }
            if(a>=q)
            {
                q=0;
                a=0;
            }
            else
            {
                q-=a;
                a=0;
            }
        }
        if(q)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
    return 0;
}