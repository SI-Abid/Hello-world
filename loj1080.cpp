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
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        cout<<"Case "<<tc<<":"<<endl;
        int q;
        string s;
        cin>>s>>q;
        while(q--)
        {
            char test;
            cin>>test;
            if(test=='I')
            {
                int i, j;
                cin>>i>>j;
                for(int k=i-1; k<j; k++)
                {
                    s[k]^=1;
                }
            }
            else
            {
                int in;
                cin>>in;
                cout<<s[in-1]<<endl;
            }
            // cout<<s<<endl;
        }
    }
    
    return 0;
}
