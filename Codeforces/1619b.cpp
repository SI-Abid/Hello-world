#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    set<int> s;
    for(int i=1;i*i<=1000000000;i++)
    {
        // v.push_back(i*i);
        s.insert(i*i);
    }
    for(int i=2;i*i*i<=1000000000;i++)
    {
        // v.push_back(i*i*i);
        s.insert(i*i*i);
    }
    for(int x:s)
    {
        v.push_back(x);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        int x = upper_bound(v.begin(),v.end(),n)-v.begin();
        cout<<x<<endl;
    }

    return 0;
}