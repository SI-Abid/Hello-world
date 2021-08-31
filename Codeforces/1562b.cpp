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
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    bool prime[105];

    for (int i = 2; i < 100; i++) {
        prime[i] = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime[i] = false;
            }
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int ar[10];
        int n;
        string s;
        cin>>n>>s;
        bool ok=true;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9')
            {
                cout<<1<<endl<<s[i]<<endl;
                ok=false;
                break;
            }
        }
        if(!ok) continue;

        for (int j = 0; j < n && ok; j++)
        {
            for (int k = j+1; k < n && ok; k++)
            {
                if(!prime[(s[j]-'0')*10+(s[k]-'0')])
                {
                    cout<<2<<endl<<s[j]<<s[k]<<endl;
                    ok=false;
                }
            }
        }
        
    }
    
    return 0;
}
