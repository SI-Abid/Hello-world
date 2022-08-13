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
        cin>>n;
        if(n==1)
        {
            cout<<1<<'\n';
            continue;
        }
        if(n%2==0)
        {
            // cout<<n;
            for(int i=2;i<=n;i+=2)
            {
                cout<<i<<' '<<i-1<<' ';
            }
        }
        else
        {
            cout<<1;
            for (int i = 3; i <= n; i+=2)
            {
                cout<<' '<<i<<' '<<i-1;
            }
        }
        cout<<'\n';
    }
    return 0;
}

// 1 2 3 4 5
// 1 5 4 3 2
// 1 2 3 4
// 1 4 3 2 = 4+3+4=11
// 4 3 2 1 = 4+6+6+4=20