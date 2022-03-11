#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,y;
        cin>>n>>x>>y;
        vector<long long> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        if((sum+x+y)%2==0)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}