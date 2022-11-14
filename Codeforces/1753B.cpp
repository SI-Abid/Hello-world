#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    map<int,int> cnt;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    while(true)
    {
        auto it=cnt.begin();
        cnt.erase(it);
        if(it->first>=x)
        {
            puts("Yes");
            return 0;
        }
        if(it->second%(it->first+1))
        {
            puts("No");
            return 0;
        }
        cnt[it->first+1]+=it->second/(it->first+1);
    }
    return 0;
}