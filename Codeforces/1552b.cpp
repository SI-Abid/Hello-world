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
    // read input
    int t; cin >> t;
    while(t--)
    {
        int n,kk,jj,i,j,k; cin >> n;
        int a[n+5][5], b[n+5];
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        for(i = 0; i < n; i++)
            for(j = 0; j < 5; j++)
                cin >> a[i][j];
        
        for(j = 0; j < n-1; j++)
        {
            for(k = j+1; k < n; k++)
            {
                kk=jj=0;
                for(i = 0; i < 5; i++)
                {   
                    if(a[j][i] < a[k][i])
                    {
                        jj++;
                    }
                    else
                    {
                        kk++;
                    }
                }
                jj>kk ? b[j]++ : b[k]++;
            }
        }
        
        int mx=b[0], gold=1;
        bool flag=false;
        for(i = 1; i < n; i++)
        {
            // printf("player[%d] is %d\n",i+1,b[i]);
            if(b[i] > mx)
            {
                mx = b[i];
                gold = i+1;
            }
            if(b[i] != b[i-1])
                flag=true;
        }
        if(n==1)
            cout<<"1"<<endl;
        else if(flag)
            cout << gold << endl;
        else
            cout << "-1" << endl;
    }
    
    // check runtime and memory usage
    // struct rusage usage;
    // getrusage(RUSAGE_SELF, &usage);
    // cout << "Time usage: " << usage.ru_utime.tv_sec + usage.ru_utime.tv_usec / 1000000.0 << endl;
    // cout << "Memory usage: " << usage.ru_maxrss << endl;
    
    return 0;
}
