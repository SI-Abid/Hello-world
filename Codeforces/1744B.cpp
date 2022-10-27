#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,q;
        cin>>n>>q;
        int odd = 0,even = 0;
        vector<int> a(n);
        long long sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            if(x)
            {
                sum+=(y*odd);
                if(y&1)
                {
                    even+=odd;
                    odd=0;
                }
            }
            else
            {
                sum+=(y*even);
                if(y&1)
                {
                    odd+=even;
                    even=0;
                }
            }
            cout<<sum<<'\n';
        }
    }
    return 0;
}