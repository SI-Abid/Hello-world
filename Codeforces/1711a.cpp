#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        cout<<n;
        for(int i=1;i<n;i++)
        {
            cout<<" ";
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}