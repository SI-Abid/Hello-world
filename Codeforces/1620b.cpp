#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long w,h;
        cin>>w>>h;
        vector<long long> v;
        vector<long long> ans;
        for(long long j=0;j<4;j++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
            for(long long i=0;i<v[0];i++)
            {
                cin>>x;
                v.push_back(x);
            }
            if(j<2)
                ans.push_back(((*(v.end()-1))-v[1])*h);
            else
                ans.push_back(((*(v.end()-1))-v[1])*w);
            v.clear();
        }
        cout<<*max_element(ans.begin(),ans.end())<<endl;
    }
    return 0;
}