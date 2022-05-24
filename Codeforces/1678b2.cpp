#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    if(argc>=2)
    {
        freopen(argv[1],"r",stdin);
        if(argc>=3)
        {
            freopen(argv[2],"w",stdout);
        }
    }

    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;cin>>s;
        vector<int> v;
        int cnt=0;
        for (size_t i = 0; i < n; i++)
        {
            cnt=1;
            while(i<n&&s[i]==s[i+1])
            {
                cnt++;
                i++;
            }
            v.push_back(cnt);
        }
        // for(auto x:v)cout<<x<<" ";
        // cout<<"\n";
        int ans=0;
        vector<int> pos;
        for (size_t i = 0; i < v.size(); i++)
        {
            if(v[i]%2==1)
            {
                pos.push_back(i);
            }
        }
        if(pos.size()==0)
        {
            cout<<"0 "<<v.size()<<"\n";
            continue;
        }
        int grps=0;
        for(int i=0;i<pos.size()-1;i+=2)
        {
            ans+=pos[i+1]-pos[i];
            if(min(v[pos[i]],v[pos[i+1]])==1)
            {
                grps+=1;
            }
            else
            {
                grps+=2;
            }
        }
        for (int i = 1; i < pos.size()-2; i++)
        {
            grps+=pos[i+1]-pos[i]-1;
            // cout<<pos[i+1]-pos[i]<<"\n";
        }
        
        cout<<ans<<" "<<grps<<"\n";
    }
    return 0;
}