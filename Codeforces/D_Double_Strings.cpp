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
        vector<string> a(n);
        map<string,bool> m;
        vector<bool> ans(n,false);
        for (string &i:a)
        {
            cin>>i;
            m[i]=true;
        }
        for (size_t i = 0; i < n; i++)
        {
            for (int j = 1; j<a[i].size(); j++)
            {
                string s=a[i].substr(0,j);
                string r=a[i].substr(j,a[i].size()-j);
                // cout<<s<<" "<<r<<endl;
                if(m[s] && m[r])
                {
                    ans[i]=true;
                    break;
                }
            }
        }
        for(auto b:ans)
        {
            cout<<b;
        }
        cout<<'\n';
    }
    return 0;
}