#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<pair<int,int>> p;
    // map<int,int> mp;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if(v[i][j]=='*')
            {
                p.push_back({i+1,j+1});
                // mp[i]++;
            }
        }
    }
    int x,y;
    if(p[0].first==p[1].first)
    {
        x=p[2].first;
    }
    else if(p[0].first==p[2].first)
    {
        x=p[1].first;
    }
    else
    {
        x=p[0].first;
    }
    if(p[0].second==p[1].second)
    {
        y=p[2].second;
    }
    else if(p[0].second==p[2].second)
    {
        y=p[1].second;
    }
    else
    {
        y=p[0].second;
    }
    cout<< x << " " << y << "\n";
    return 0;
}