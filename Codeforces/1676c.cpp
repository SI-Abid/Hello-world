#include<bits/stdc++.h>
using namespace std;

int calc(string a, string b)
{
    int ans=0;
    for (size_t i = 0; i < a.size(); i++)
    {
        ans+=abs(a[i]-b[i]);
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    if(argc>1)
    {
        freopen(argv[1],"r",stdin);
    }
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<string> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // sort(a.begin(),a.end());
        int tmp=INT_MAX;
        for (size_t i = 0; i < n; i++)
        {
            for(size_t j=0;j<n;j++)
            {
                if(i==j)continue;
                tmp=min(tmp,calc(a[i],a[j]));
            }
        }
        cout<<tmp<<"\n";
    }
    return 0;
}