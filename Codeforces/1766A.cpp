#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    vector<int> rounds;
    // int x=1;
    for(int i=1;i<=10000000;i*=10)
    {
        for(int j=1;j<=9;j++)
        {
            rounds.push_back(i*j);
            // cout<<rounds.back()<<" ";
        }
    }
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
        int n;
        cin>>n;
        int ans= upper_bound(rounds.begin(),rounds.end(),n)-rounds.begin();
        cout<<ans<<endl;
    }
    return 0;
}