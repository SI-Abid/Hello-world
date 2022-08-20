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
        if(n<m)
            swap(n,m);
        if(n==1 and m==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        cout<< n+m+m-2<<endl;
    }
    return 0;
}