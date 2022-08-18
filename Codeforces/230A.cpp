#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>h>>n;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    for(auto i:v)
    {
        if(i.first>=h)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        h+=i.second;
    }
    cout<<"YES"<<endl;
    return 0;
}