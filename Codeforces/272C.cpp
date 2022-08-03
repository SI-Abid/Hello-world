#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i+1];
    }
    ll ans=0;
    int m;
    cin>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        ll h = a[x]>ans?a[x]:ans;
        cout<<h<<endl;
        ans = h+y;
    }
    return 0;
}