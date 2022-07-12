#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    #endif
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        map<int,int> m;
        for (size_t i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            while(x%2==0)
                x/=2;
            m[x]++;
        }
        bool flag=true;
        for (size_t i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            while(x)
            {
                if(m[x])
                {
                    m[x]--;
                    break;
                }
                x/=2;
            }
            if(x==0)
                flag=false;
        }
        cout<<(flag?"YES":"NO")<<'\n';
    
    }
    return 0;
}