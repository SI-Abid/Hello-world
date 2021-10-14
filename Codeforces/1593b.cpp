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

class str: public string
{
    public:
    void replace(char x, char y){ for (char &c:*this)if(c==x)c=y; }
};

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        bool ok1=false,ok2=false;
        for (int i = s.size()-1; i >= 0; i--)
        {
            if(!ok1)
            {
                if(s[i]=='0')
                {
                    ok1=true;
                    continue;
                }
                cnt1++;
            }
            else if(s[i]=='0' || s[i]=='5')
            {
                break;
            }
            else
            {
                cnt1++;
            }
        }
        for (int i = s.size()-1; i >= 0; i--)
        {
            if(!ok2)
            {
                if(s[i]=='5')
                {
                    ok2=true;
                    continue;
                }
                cnt2++;
            }
            else if(s[i]=='2' || s[i]=='7')
            {
                break;
            }
            else
            {
                cnt2++;
            }
        }
        cout<<min(cnt1,cnt2)<<endl;
    }
    
    return 0;
}
