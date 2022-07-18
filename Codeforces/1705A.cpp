#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n, x;
        cin>>n>>x;
        vector<int> a(n+n);
        for(auto &i:a)
            cin>>i;
        sort(a.begin(),a.end());
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(a[i+n]<a[i]+x)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}