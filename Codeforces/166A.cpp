#include<bits/stdc++.h>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for(auto i : v) os << i << '\n';
    return os;
}
template<typename A, typename B>
ostream& operator<<(ostream& os, const pair<A, B>& p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
        if(a.first==b.first)
        {
            return a.second<b.second;
        }
        return a.first>b.first;
    });
    auto xx=v[k-1];
    int ans=0;
    for(auto xxx:v)
    {
        if(xxx==xx)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}