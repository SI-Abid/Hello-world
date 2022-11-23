#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,s;
        cin>>n>>s;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        int last=m.rbegin()->first;
        for (int i = 1; i <= last; i++)
        {
            if(m[i]==0)
            {
                m[i]++;
                s-=i;
            }
            if(s<0)
            {
                break;
            }
        }
        while(s>0)
        {
            last++;
            s-=last;
        }
        if(s<0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}