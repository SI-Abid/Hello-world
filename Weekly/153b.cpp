#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<int> a(n);
    map<int,int> m;
    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int mina=min_element(a.begin(),a.end())[0];
    int maxa=max_element(a.begin(),a.end())[0];
    int maxdiff=maxa-mina;
    long long cntmin=m[mina];
    long long cntmax=m[maxa];
    long long ans=cntmax*cntmin;
    if(mina==maxa)
    {
        ans=(n*(n-1))/2;
    }
    cout<<maxdiff<<" "<<ans<<"\n";
    return 0;
}