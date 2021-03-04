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
    for(cin>>t;t;t--)
    {
        string s;
        cin>>s;
        int i;
        auto it=s.begin();
        int inc=0;
        for(i=0; i<s.size(); i++, it++)
        {
            int pos=distance(s.be,max_element(it, s.en));
            if(s[i]<s[pos])
            {
                swap(s[i], s[pos]);
                inc++;
            }
            if(inc==2)  break;
        }
        if(inc<2)
        {
            swap(s[s.size()-1], s[s.size()-2]);
        }
        cout<<s<<endl;
    }
    
    return 0;
}
