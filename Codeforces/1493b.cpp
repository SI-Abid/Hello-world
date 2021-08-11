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
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

bool ar[]={1,1,1,0,0,1,0,0,1,0};
char mir[]={'0','1','5','-1','-1','2','-1','-1','8','-1'};
int hh, mm;

bool is_mir(string s)
{
    if(ar[s[0]-48] && ar[s[1]-48] && ar[s[3]-48] && ar[s[4]-48])
            return true;
    return false;
}
string incr(string s)
{
    if(s[4]-48==mm%10)
    {
        s[4]='0';
        if(s[3]-48==mm/10)
        {
            s[3]='0';
            if(s[1]-48==hh%10)
            {
                s[1]='0';
                if(s[0]-48==hh/10)
                {
                    s[0]='0';
                }
                else
                {
                    s[0]++;
                }
            }
            else
            {
                s[1]++;
            }
        }
        else
        {
            s[3]++;
        }
    }
    else
    {
        s[4]++;
    }
    return s;
}
string rev(string k)
{
    k[0]=mir[k[0]-48];
    k[1]=mir[k[1]-48];
    k[3]=mir[k[3]-48];
    k[4]=mir[k[4]-48];
    return k;
}
void solve()
{
    string s;
    cin>>hh>>mm>>s;
    hh--, mm--;
    while(true)
    {
        cout<<s<<endl;
        string r=rev(s);
        if(r[0]-48<=hh/10 && r[1]-48<=hh%10 && r[3]-48<=mm/10 && r[4]-48<=mm%10)
            if(is_mir(s))
                break;
        
        s=incr(s);
    }
    cout<<s<<endl;
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    for(cin>>t;t;t--)
        solve();
    
    return 0;
}
