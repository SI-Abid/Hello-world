#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> v(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>v[i+1];
    }
    int s=1;
    while(s<t)
    {
        s+=v[s];
        if(s==t) break;
    }
    if(s==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}