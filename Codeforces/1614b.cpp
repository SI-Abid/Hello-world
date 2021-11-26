#include<bits/stdc++.h>
using namespace std;

bool seen[1000005];
vector<int> a[1000005];

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<1000005;i++)
        {
            seen[i] = false;
            a[i].clear();
        }
        vector<int> v(n), u;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            a[v[i]].push_back(i+1);
        }
        vector<int> w(n+1);
        sort(v.rbegin(),v.rend());
        int ans=0,cnt=2,j=1;
        w[0]=0;
        
        for(int i=0;i<n;i++)
            if(a[v[i]].size() && !seen[v[i]])
            {
                seen[v[i]]=true;
                for(int pos:a[v[i]])
                {
                    w[pos]=(cnt/2)*j;
                    cnt++;
                    j*=-1;
                    ans+=abs(w[pos]*v[i]*2);
                    // cout<<"ans: "<<ans<<" - v[i] "<<v[i]<<" pos "<<pos<<endl;
                }
        }
       
        // cout<<cnt<<endl;
        cout<<ans<<endl;
        for(int i=0;i<=n;i++)
        {
            cout<<w[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}