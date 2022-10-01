#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        vector<pair<int, int>> ans;
        ans.push_back({1, n});
        int tmp = v[1]+v[n];
        if(tmp%2==0)
            v[1] = v[n];
        else
            v[n] = v[1];
        for(int i=2;i<n;i++)
        {
            if((v[i]+v[1])%2)
                ans.push_back({1,i});
        }
        for(int i=2;i<n;i++)
        {
            if((v[i]+v[n])%2==0)
                ans.push_back({i,n});
        }
        cout<<ans.size()<<endl;
        for(auto x:ans)
            cout<<x.first<<" "<<x.second<<endl;
        
    }
    return 0;
}