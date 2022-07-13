#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> a;
        for (int i = 1; i <= n; i++)
        {
            int x;cin>>x;
            if(i>x)
            {
                a.push_back({x,i});
            }
        }
        sort(a.begin(),a.end());
        ll ans=0;
        n = a.size();
        int pos = 0;
        for(int i=0;i<n-1;i++)
        {
            auto [x,y] = a[i];
            // find such a pair that first element is greater than y using binary search
            int l = i+1, r = n-1;
            while(l<=r)
            {
                int mid = (l+r)/2;
                if(a[mid].first>y)
                    r = mid-1;
                else
                    l = mid+1;
            }
            ans += n-l;
        }
        cout<<ans<<'\n';
    }
    return 0;
}