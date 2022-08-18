#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,k;
        cin>>n>>k;
        if(k%4==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(k%4==2)
        {
            for(int i=1;i<=n;i+=2)
            {
                if((i+1)%4==0)
                    cout<<i<<' '<<i+1<<'\n';
                else
                    cout<<i+1<<' '<<i<<'\n';
            }
            continue;
        }
        for(int i=1;i<n;i+=2)
                cout<<i<<' '<<i+1<<'\n';
    }
    return 0;
}