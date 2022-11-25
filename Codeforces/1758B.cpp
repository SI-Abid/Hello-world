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
        if(n&1)
        {
            for (size_t i = 0; i < n; i++)
            {
                cout<<n<<" ";
            }
        }
        else
        {
            cout<<1<<" "<<3<<" ";
            for (size_t i = 0; i < n-2; i++)
            {
                cout<<2<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}