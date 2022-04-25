#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int f=2*n/3;
    int l=3*n/4;
    // cout<<f<<" "<<l<<"\n";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // cout<<"\n";
    sort(a.begin(), a.begin() + f, greater<int>());
    // for(auto i:a)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    // reverse(a.begin(), a.end());
    // for(auto i:a)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    sort(a.begin()+(n-l), a.end());
    // for(auto i:a)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    // reverse(a.begin(), a.end());
    cout<<a[n/2]<<"\n";
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}