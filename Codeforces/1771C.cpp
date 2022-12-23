#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
void init(){
    int SIZE=1000000;
    vector<bool> prime(SIZE+1,true);
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

vector<int> prime_divisors(int n)
{
    vector<int> ans;
    for (int i = 0; i < primes.size() && primes[i] * primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            ans.push_back(primes[i]);
            while (n % primes[i] == 0)
            {
                n /= primes[i];
            }
        }
    }
    if (n > 1)
        ans.push_back(n);
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    map<int, bool> divisors;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp = prime_divisors(a[i]);
        for (int j = 0; j < temp.size(); j++)
        {
            if (divisors[temp[j]])
            {
                cout << "YES" << endl;
                return;
            }
        }
        for (int j = 0; j < temp.size(); j++)
        {
            divisors[temp[j]] = true;
        }
    }
    cout << "NO" << endl;
}

signed main()
{
    int _;
    cin >> _;
    init();
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}