#include<bits/stdc++.h>
using namespace std;

#define SIZE 2000

signed main()
{
    // init();
    // generate all co primes of 1 to 2000
    vector<vector<bool>> isCoprimes(SIZE,vector<bool>(SIZE,true));
    for(int i=1;i<SIZE;i++)
    {
        for(int j=1;j<SIZE;j++)
        {
            if(__gcd(i,j)!=1)
            {
                isCoprimes[i][j]=false;
                isCoprimes[j][i]=false;
            }
        }
    }
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
        int n;
        cin>>n;
        vector<int> a(n);
        map <int,int> pos;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            pos[a[i]]=i+1;
            // if(prime[a[i]])isPrime[i]=true,lastPrime=i;
        }
        int ans=-1;
        // all unique
        vector<int> unique;
        for(auto[k,v]:pos)
        {
            unique.push_back(k);
            // cout<<k<<" "<<v<<endl;
        }
        // for(int i=0;i<unique.size();i++)
        // cout<<unique[i]<<" ";
        // cout<<endl;
        
        n=unique.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                // if(i==j)continue;
                int x=unique[i];
                int y=unique[j];
                if(isCoprimes[x][y])
                {
                    ans=max(ans,pos[x]+pos[y]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}