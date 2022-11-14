#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "[ ";
    for (auto &i : v)
        os << i << " ";
    os << "]";
    return os;
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,q;
        cin>>n>>q;
        vector<vector<int>> x(1002);
        set<int> s;
        for(int i=0;i<n;i++)
        {
            int h,w;
            cin>>h>>w;
            x[h].push_back(w);
            s.insert(h);
        }
        vector<vector<ll>> pre(1002);
        for(auto i:s)
        {
            pre[i].clear();
            sort(x[i].begin(),x[i].end());
            pre[i].push_back(0);
            for(auto j:x[i])
            {
                if(pre[i].size()==0)
                {
                    pre[i].push_back(j);
                }
                else
                {
                    pre[i].push_back(pre[i].back()+j);
                }
            }
        }
        while(q--)
        {
            int hs,ws,he,we;
            cin>>hs>>ws>>he>>we;
            ll ans = 0;
            for (size_t i = hs+1; i < he; i++)
            {
                if(x[i].size()==0)
                {
                    continue;
                }
                int it = upper_bound(x[i].begin(),x[i].end(),ws)-x[i].begin();
                int ik = upper_bound(x[i].begin(),x[i].end(),we-1)-x[i].begin();
                ans+=(pre[i][ik]-pre[i][it])*i;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}