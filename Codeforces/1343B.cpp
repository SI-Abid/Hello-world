#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4!=0)
            cout<<"NO\n";

        else
        {
            cout<<"YES\n";
            int x;
            for(int i=2;i<=n;i+=2)
            {
                cout<<i<<" ";
            }
            int i;
            for(i=1;i<n-1;i+=2)
            {
                cout<<i<<" ";
            }
            cout<<i+(n/2)<<endl;
        }
    }
    return 0;
}
