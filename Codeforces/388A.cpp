#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    // map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        // m[v[i]]++;
    }
    sort(v.begin(),v.end());
    int ans=0;
    int i=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==-1)
        {
            continue;
        }
        int cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(cnt<v[j])
            {
                cnt++;
                v[j]=-1;
            }
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}