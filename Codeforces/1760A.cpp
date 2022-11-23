#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        cout<< v[1] <<'\n';
    
    }
    return 0;
}