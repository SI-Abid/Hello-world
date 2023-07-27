#include<bits/stdc++.h>
using namespace std;

ostream &operator<<(ostream &os, const vector<int> &v)
{
    for (auto x : v)
        os << x << " ";
    return os;
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
        if(n<3)
        {
            for (int i = 0; i < n; i++)
            {
                cout<<i+1<<" ";
            }
            cout<<endl;
            continue;
        }
        vector<int> a(n,0);
        a[0]=2;
        a[n/2]=1;
        a[n-1]=3;
        int x=4;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0)
            {
                a[i]=x++;
            }
        }
        cout<<a<<endl;       
    }
    return 0;
}