#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

const int SIZE = 2000002;
vector<int> primes;
void init()
{
    vector<bool> prime;
    prime.assign(SIZE, true);
    prime[0] = prime[1] = false;
    for (int i = 4; i < SIZE; i += 2)
    {
        prime[i] = false;
    }
    for (int i = 3; i * i <= SIZE; i += 2)
    {
        if (prime[i])
        {
            for (int j = i * i; j < SIZE; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i < SIZE; i++)
    {
        if (prime[i])
            primes.push_back(i);
    }
}

void solve()
{
    init();
    int n;
    cin >> n;
    if (n < 4)
    {
        cout << n << " 0" << nl;
        return;
    }
    int ans = 1;
    map<int, int> cnt;
    for (int i = 0; primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            ans *= primes[i];
            while (n % primes[i] == 0)
            {
                cnt[primes[i]]++;
                n /= primes[i];
            }
        }
    }
    cout << ans << " ";
    int cont = max_element(cnt.begin(), cnt.end(),
                           [](const std::pair<int, int> &p1, const std::pair<int, int> &p2)
                           {
                               return p1.second < p2.second;
                           })
                   ->second;
    int mn= min_element(cnt.begin(), cnt.end(),
                           [](const std::pair<int, int> &p1, const std::pair<int, int> &p2)
                           {
                               return p1.second < p2.second;
                           })
                   ->second;
    ans = ceil(log2(cont));
    if (__builtin_popcount(cont) != 1 or cont!=mn)
        ans++;
    cout << ans << nl;
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}