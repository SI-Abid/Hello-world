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
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x<n) cnt++;
        }
        if(cnt==n) cout<<-1<<endl;
        else cout<<n-cnt<<endl;
    }
    return 0;
}