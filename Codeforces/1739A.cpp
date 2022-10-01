#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m;
        cin>>n>>m;
        if(max(n,m)>3 and min(n,m)>1)
        {
            cout<<"1 1\n";
        }
        else
        {
            cout<<(n+1)/2<<" "<<(m+1)/2<<"\n";
        }
    }
    return 0;
}