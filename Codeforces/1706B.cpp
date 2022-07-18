#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a;
        map<int,bool> m;
        vector<vector<int>> pos(n+1);
        vector<int> ans(n+1, 0);
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(m.find(x)==m.end())
            {
                m[x]=true;
                a.push_back(x);
            }
            pos[x].push_back(i);
        }
        for(int col: a)
        {
            int sum=1;
            for(int i=1; i<pos[col].size(); i++)
            {
                if((pos[col][i]-pos[col][i-1])%2==1)
                {
                    sum++;
                }
                else
                {
                    ans[col]=max(ans[col], sum);
                }
            }
            ans[col]=max(ans[col], sum);
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}