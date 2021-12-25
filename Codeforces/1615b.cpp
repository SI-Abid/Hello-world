////////////////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
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

int bit[200005][18];

int main(int argc, char *argv[])
{
    if (argc == 2 or argc == 3)
        freopen(argv[1], "r", stdin);
    if (argc == 3)
        freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    for (int i = 1; i <= 200000; i++)
    {
        for (int j = 0; j < 18; j++)
        {
            bit[i][j] = bit[i - 1][j];
            if (!(i & (1 << j)))
                bit[i][j]++;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int ans = 1e9;

        for (int i = 0; i < 18; i++)
        {
            ans = min(ans, bit[r][i] - bit[l - 1][i]);
        }

        cout << ans << endl;
    }

    return 0;
}
