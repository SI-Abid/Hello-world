#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<double, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].second>>v[i].first;
        v[i].first/=v[i].second;
    }
    sort(v.rbegin(), v.rend());
    // for(auto [a,b]:v)
    // {
    //     cout<<a<<" "<<b<<"\n";
    // }
    int cap=0;
    double taste=0;
    for(auto [t,w]:v)
    {
        if(cap+w<=k)
        {
            cap+=w;
            taste+=t*w;
        }
        else
        {
            int rem=k-cap;
            taste+=t*rem;
            break;
        }
    }
    printf("%.10f\n",taste);
    return 0;
}