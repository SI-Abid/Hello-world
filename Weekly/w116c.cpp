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
#define all(x) (x).begin(), (x).end()
#define out cout << setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

char chr[26];

void solve()
{
    memset(chr, -1, 26);
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    // map<char, char> mc;
    for (int i = 0; i < m; i++)
    {
        char x, y;
        // bool xx, yy;
        // xx=yy=true;
        cin >> x >> y;
        for (int i = 0; i < 26; i++)
        {
            if (chr[i]==-1)
            {
                if(i==x-'a')
                    chr[i]=y;
                else if(i==y-'a')
                    chr[i]=x;
            }
            else
            {
                if(chr[i]==x)
                    chr[i]=y;
                else if (chr[i]==y)
                    chr[i]=x;
            }
        }
        // chr[x-'a']=y;
        // chr[y-'a']=x;
        // if(isalpha(mc[x]))
        // {
        //     mc[mc[x]]=y;
        //     xx=false;
        // }
        // if(isalpha(mc[y]))
        // {
        //     mc[mc[y]]=x;
        //     yy=false;
        // }
        // if(xx) mc[x]=y;
        // if(yy) mc[y]=x;
    }
    for (int i = 0; i < n; i++)
    {
        if (chr[s[i]-'a']!=-1)
            cout<<chr[s[i]-'a'];
        else
            cout << s[i];
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    if (argc == 2 or argc == 3)
        freopen(argv[1], "r", stdin);
    if (argc == 3)
        freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    solve();

    return 0;
}
