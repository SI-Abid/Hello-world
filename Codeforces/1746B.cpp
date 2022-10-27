#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<int> b = a;
        sort(b.begin(),b.end());
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
                cnt++;
        }
        cout<<cnt/2<<endl;
    
    }
    return 0;
}