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
#define bug(x) cout<<"bug : "<<#x<<" = "<<x<<endl

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void debug_varargs(const char* name, ...) {
  va_list args;
  va_start(args, name);
  cout << name << " : ";
  while (true) {
    int x = va_arg(args, int);
    if (x == -1) break;
    cout << x << " ";
  }
  cout << endl;
  va_end(args);
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
    {
        ll k, x;
        cin >> k >> x;
        if(k*k<=x)
        {
            cout<<2*k-1<<endl;
            continue;
        }
        ll ub = k;
        ll lb = k/2;
        while(true)
        {
            ll mid = (ub + lb)/2;
            debug_varargs("debug", ub, mid, lb, -1);
            if(mid*(mid+1)/2 == x)
            {
                cout<<mid<<endl;
                break;
            }
            if(mid+1==ub)
            {
                cout<<ub<<endl;
                break;
            }
            else if(mid*(mid+1)/2 < x)
            {
                // if((mid+1)*(mid+2)/2 >= x)
                // {
                //     cout<<mid+1<<endl;
                //     break;
                // }
                lb = mid;
            }
            else
            {
                // if(mid*(mid+1)/2 >= x)
                // {
                //     cout<<mid<<endl;
                //     break;
                // }
                ub = mid;
            }
            // bug(ub);
            // bug(mid);
            // bug(lb);
        }
    }
    
    return 0;
}
