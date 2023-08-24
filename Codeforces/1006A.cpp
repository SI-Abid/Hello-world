#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(auto &x:a)cin>>x;
    for(auto &x:a)if(x%2==0)x--;
    for(auto &x:a)cout<<x<<' ';
    return 0;
}