#include<bits/stdc++.h>
using namespace std;

int nc2(int n){
    return (n*(n-1))/2;
}

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        int x;
        for (size_t i = 0; i < n; i++)
        {
            cin>>x;
        }
        
        cout<< (nc2(10-n)*6) << endl;
    
    }
    return 0;
}