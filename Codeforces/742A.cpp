#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ans = {6,8,4,2};
    int n;
    cin>>n;
    if(n)
        cout<<ans[n%4]<<"\n";
    else
        cout<<"1\n";
    return 0;
}