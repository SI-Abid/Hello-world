#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,x;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int ans=v[0];
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            ans&=v[i];
            if(ans==0)
            {
                if(i!=n-1)
                    break;
                cnt++;
                ans=v[i+1];
            }
        }
        if(ans!=0)
            cnt--;
        cnt= max(1,cnt);
        cout<<cnt<<endl;
    }
    return 0;
}