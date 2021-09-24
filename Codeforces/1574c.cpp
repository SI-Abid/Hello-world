#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define be begin()
#define en end()
#define rb rbegin()
#define re rend()
#define all(x) (x).begin(), (x).end()
#define out cout << setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

int main(int argc, char *argv[])
{
    if (argc == 2 or argc == 3)
        freopen(argv[1], "r", stdin);
    if (argc == 3)
        freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    vll v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll m;
    cin >> m;
    vll x(m), y(m);
    for (ll i = 0; i < m; i++)
        cin >> x[i] >> y[i];

    sort(all(v));

    for (ll i = 0; i < m; i++)
    {
        auto go = lower_bound(v.be, v.en, x[i]) - v.be;
        // cout<<v[go-1]<<" "<<v[go]<<endl;

        ll ans = 2e18;

        if (go > 0)
            ans = min(ans, (x[i] - v[go - 1]) + max(0LL, y[i] - sum + v[go - 1]));

        if (go < n)
            ans = min(ans, max(0LL, y[i] - sum + v[go]));

        cout << ans << endl;
    }

    return 0;
}
