
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long> type1(n+1);
    vector<long long> type2(n+1);
    type1[0]=0;
    for(int i=1;i<=n;i++)
    {
        type1[i]=type1[i-1]+a[i-1];
    }
    sort(a.begin(),a.end());
    type2[0]=0;
    for(int i=1;i<=n;i++)
    {
        type2[i]=type2[i-1]+a[i-1];
    }
    int m;
    cin>>m;
    while(m--)
    {
        int t, l,r;
        cin>>t>>l>>r;
        cout<<(t==1?type1[r]-type1[l-1]:type2[r]-type2[l-1])<<'\n';
    }
    return 0;
}