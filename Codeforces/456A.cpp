#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),[](pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.first==p2.first)
            return p1.second<p2.second;
        return p1.first<p2.first;
    });
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        if(v[i].first<v[i+1].first and v[i].second>v[i+1].second)
        {
            flag=true;
            break;
        }
    }   
    if(flag)
    cout<<"Happy Alex";
    else
    cout<<"Poor Alex";

    return 0;
}