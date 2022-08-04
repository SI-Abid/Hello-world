#include<bits/stdc++.h>
using namespace std;
struct node
{
    int id,c,p;
    bool operator<(const node &a) const
    {
        return p>a.p;
    }
};
ostream &operator<<(ostream &out,node a)
{
    out<<a.id<<" "<<a.c<<" "<<a.p;
    return out;
}
template<typename T>
ostream& operator<<(ostream &os,const vector<T> &v)
{
    for(auto i:v)
        os<<i<<"\n";
    return os;
}
template<typename T,typename U>
ostream& operator<<(ostream &os,const map<T,U> &m)
{
    for(auto i:m)
        os<<i.first<<" "<<i.second<<endl;
    return os;
}

int main()
{
    int n;
    cin >> n;
    vector<node> cp(n);
    for(int i=0;i<n;i++)
    {
        cp[i].id=i+1;
        cin >> cp[i].c >> cp[i].p;
    }
    sort(cp.begin(),cp.end());
    int k;
    cin >> k;
    vector<int> r(k);
    // map<int,int> table_id;
    for(int i=0;i<k;i++)
    {
        cin >> r[i];
        // table_id[r[i]]=i+1;
    }
    // sort(r.begin(),r.end());
    vector<pair<int,int>> ans;
    // vector<bool> taken(1001,false);
    long long sum=0;
    // cout<<cp<<endl<<table_id<<endl;
    for(int i=0;i<n;i++)
    {
        int want=cp[i].c;
        int table=INT_MAX;
        int id;
        for(int i=0;i<k;i++)
        {
            if(r[i]>=want)
            {
                if(r[i]<table)
                {
                    table=r[i];
                    id=i+1;
                }
            }
        }
        if(table==INT_MAX)
        {
            continue;
        }
        r[id-1]=-1;
        ans.push_back({cp[i].id,id});
        sum+=cp[i].p;
    }
    cout<<ans.size()<<" "<<sum<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    return 0;
}