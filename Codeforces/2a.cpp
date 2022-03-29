#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> m;
    vector<string> v;
    vrctor<pair<string,int>> vp;
    string s;
    int c;
    while(n--)
    {
        cin>>s>>c;
        vp.push_back({s,c});
        if(m.find(s)==m.end())
        {
            m[s]=c;
            v.push_back(s);
        }
        else
        {
            m[s]+=c;
        }
    }
    int point=0;
    for(auto [key,value]:m)
    {
        point=max(point,value);
    }
    for(auto pl:v)
    {
        if(m[pl]<point)
        {
            v.erase(find(v.begin(),v.end(),pl));
        }
    }
    for(auto pl:v)
    {
        for(auto [plr,score]:vp)
        {
            if(pl==plr)
            {
                
            }
        }
    }

    return 0;
}