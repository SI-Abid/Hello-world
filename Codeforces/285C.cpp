#include<bits/stdc++.h>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    os << "[ ";
    for(auto& i : v)
        os << i << " ";
    os << "]";
    return os;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    // if(n==100000)
    //     cout<<a<<'\n';
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=abs(a[i-1]-i);
    }
    cout<<ans;
    return 0;
}