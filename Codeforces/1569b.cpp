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

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int to=0;
        for(auto x:s)
        {
            if(x=='2') to++;
        }
        if(to==1 or to==2)
        {
            cout<<"NO\n";
            continue;
        }
        // to =0 or >3
        cout<<"YES\n";
        char a[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==j)    
                    a[i][j]='X';
                
                else        
                    a[i][j]='=';
            }
        }
    
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='2')
            for (int j = i+1; j < i+n; j++)
            {
                if(s[j%n]=='2')
                {
                    a[i][j%n]='+';
                    a[j%n][i]='-';
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        
    }    
    
    return 0;
}
