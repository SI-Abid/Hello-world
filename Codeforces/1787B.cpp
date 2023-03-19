#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000000
#define ll long long
vector<int> primes;

void init(){
    // prime.assign(SIZE,true);
    vector<bool> prime(SIZE+2,true);
    prime[0]=prime[1]=false;
    for(int i=4;i<=SIZE;i+=2){
        prime[i]=false;
    }
    for(int i=3;i*i<=SIZE;i+=2){
        if(prime[i]){
            for(int j=i*i;j<=SIZE;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=SIZE;i++)
    {
        if(prime[i])primes.push_back(i);
    }
}

ll sum(int n)
{
    // prime factorization of n
    ll ans=0;
    map<int,int> mp;
    for(int i=0;i<primes.size() && primes[i]*primes[i]<=n;i++)
    {
        if(n%primes[i]==0)
        {
            int cnt=0;
            while(n%primes[i]==0)
            {
                cnt++;
                n/=primes[i];
            }
            mp[primes[i]]=cnt;
        }
    }
    if(n>1)mp[n]=1;
    for(auto it:mp)
    {
        ans+=it.first;
    }
}

signed main()
{
    init();
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        cout<< sum(n) <<endl;
    }
    return 0;
}