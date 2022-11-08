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
        long long pos=0,neg=0;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            if(x>0) pos+=x;
            else neg+=x;
        }
        cout<<abs(pos+neg)<<endl;
    }
    return 0;
}