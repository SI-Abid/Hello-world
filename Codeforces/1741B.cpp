#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        if(n==3)
        {
            cout<<"-1\n";
            continue;
        }
        if(n%2==0)
        {
            for (int i = n; i > 0; i--)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<n<<' '<<n-1<<' ';
            for (int i = 1; i < n-1; i++)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}