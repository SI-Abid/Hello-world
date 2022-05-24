#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        map<int, int> m;
        for(int i=0; i<n; i++)
            cin>>v[i], m[v[i]]++;
        vector<int> s;
        for(auto i: m)
        {
            if(i.second>=k)
                s.push_back(i.first);
        }
        if(s.empty())
        {
            cout<<"-1\n";
            continue;
        }
        sort(s.begin(), s.end());
    }
    return 0;
}