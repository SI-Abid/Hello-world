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
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<int> a(s.size());
    a[0]=0;
    for(int i=1;i<s.size();i++)
    {
        a[i]+=a[i-1]+(s[i-1]==s[i]?1:0);
    }
    // cout<<a<<'\n';
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<'\n';
    }
    return 0;
}