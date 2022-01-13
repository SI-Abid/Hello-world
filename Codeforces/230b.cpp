#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll digitalRoot(ll n)
{
    while(n>9)
    {
        n=n%10+n/10;
    }
    return n;
}

bool isPerfectSquare(ll n)
{
    ll dr=digitalRoot(n);
    return ((dr==1 or dr==4 or dr==7 or dr==9) and n!=1 and n!=7);
}

vector<bool> sieve()
{
    ll n=1000000;
    vector<bool> isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;
    for(ll i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    return isPrime;
}

int main()
{
    int n;
    cin>>n;
    vector<bool> isPrime=sieve();
    while(n--)
    {
        ll x;
        cin>>x;
        ll dr=digitalRoot(x);
        ll root=(ll)sqrt(x);
        if(isPerfectSquare(x) and root*root==x and isPrime[root])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}