////////////////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define be begin()
#define en end()
#define rb rbegin()
#define re rend()
#define all(x) (x).begin(), (x).end()
#define out cout << setprecision(20)
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cout << #x << " is " << x << endl;
#define error(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
#define pcase(x) cout << "Case " << x << ": ";
void err(istream_iterator<string> it)
{
}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const static int MOD = 1e9 + 7;
const static int INF = 1e9;
const static int dx[] = {0, 0, 1, -1};
const static int dy[] = {1, -1, 0, 0};
const static int fx[] = {0, 1, 1, 1, 0, -1, -1, -1};
const static int fy[] = {1, 1, 0, -1, -1, -1, 0, 1};
const static int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const static int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};

int main(int argc, char *argv[])
{
    if (argc == 2 or argc == 3)
        freopen(argv[1], "r", stdin);
    if (argc == 3)
        freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        bool ok = true;
        string a, s;
        cin >> a >> s;
        int i, j, n, m;
        n = a.size();
        m = s.size();
        string res = "";
        for (i = n - 1, j = m - 1; j >= 0;j--)
        {
            if (i < 0)
            {
                res += s[j];
                continue;
            }
            int x, y;
            x = a[i--] - '0';
            y = s[j] - '0';
            if (x <= y)
            {
                res += (y - x) + '0';
            }
            else
            {
                y += 10 * (s[--j] - '0');
                if (x < y and y >= 10 and y <= 19)
                {
                    res += (y - x) + '0';
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if (i < 0)
        {
            if (!ok)
            {
                cout<<"-1\n";
                continue;
            }
            while (res.back() == '0')
                res.pop_back();
            reverse(res.begin(), res.end());
            cout << res << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}
