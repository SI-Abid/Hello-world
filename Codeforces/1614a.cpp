#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>=l && x<=r)
            {
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(k>=v[i])
            {
                ans++;
                k-=v[i];
            }
            if(k==0)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}