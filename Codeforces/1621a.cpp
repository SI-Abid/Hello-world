#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        if((n+1)/2<k)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<".R"[i==j and i%2==0 and cnt++<k];
            cout<<endl;
        }
    }
    return 0;
}