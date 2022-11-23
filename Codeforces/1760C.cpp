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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        vector<int> b=v;
        sort(b.begin(), b.end());
        int mx = *max_element(v.begin(), v.end());
        for (size_t i = 0; i < n; i++)
        {
            if(v[i]==mx)
            {
                cout<<v[i]-b[n-2]<<' ';
            }
            else
            {
                cout<<v[i]-mx<<' ';
            }
        }
        cout<<'\n';
    
    }
    return 0;
}