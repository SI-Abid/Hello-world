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

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
    {
        int n, suma, sumb;
        cin >> n;
        vi a(n), b(n);
        suma=0, sumb=0;
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            suma += a[i];
        }
        for(int i = 0; i < n; i++) 
        {
            cin >> b[i];
            sumb += b[i];
        }
        if(suma != sumb)
        {
            cout << "-1" << endl;
        }
        else
        {
            vi I, J;
            int size = 0;
            for (int i = 0; i < n; i++)
            {
                if(a[i] > b[i])
                {
                    for (int j = 0; j < a[i]-b[i]; j++)
                    {
                        I.pb(i+1);
                        size++;
                    }
                }
                else if(a[i] < b[i])
                {
                    for (int j = 0; j < b[i]-a[i]; j++)
                        J.pb(i+1);
                }
            }
            cout << size << endl;
            for (int i = 0; i < size; i++)
            {
                cout << I[i] << " " << J[i] << endl;
            }
        }
    }
    return 0;
}
