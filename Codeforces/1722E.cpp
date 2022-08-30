#include<bits/stdc++.h>
using namespace std;

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
        vector<pair<int,int>>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            if(a.first==b.first)
                return a.second<b.second;
            return a.first<b.first;
        });
        // cout<<v<<endl;
        vector<long long> areas;
        areas.push_back(0);
        for (int i = 0; i < n; i++)
        {
            areas.push_back(areas.back()+(v[i].first*v[i].second));
        }
        // cout<<areas<<endl;
        while (q--)
        {
            pair<int,int> s, b;
            cin>>s.first>>s.second>>b.first>>b.second;
            
            // binary search for pair greater than s
            int l = 0, r = n;
            while (l < r)
            {
                int mid = (l+r)/2;
                if (v[mid].first > s.first and v[mid].second > s.second)
                    r = mid;
                else
                    l = mid+1;
            }
            int lower = l;
            // binary search for pair less than b
            l = 0, r = n;
            while (l < r)
            {
                int mid = (l+r)/2;
                if (v[mid].first < b.first and v[mid].second < b.second)
                    l = mid+1;
                else
                    r = mid;
            }
            int upper = l;
            // lower++;
            // cout<<lower<<' '<<upper<<'\n';
            long long ans=areas[upper]-areas[lower];
            cout<<ans<<'\n';
        }
    
    }
    return 0;
}