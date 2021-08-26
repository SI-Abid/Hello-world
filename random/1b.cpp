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

void convert1(int s1, int s2)
{
    string row, col;
    row = col = "";
    while(s1 > 0)
    {
        if(s1 >
    }
}
void convert2(string s)
{

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
        string s;
        cin >> s;
        int alphacount = 0;
        int mark;
        for(int i = 0; i < s.size(); i++)
            if(isalpha(s[i]))
            {
                alphacount++;
                if(i!=0)  mark=i;
            }

        if(alphacount == 2 && mark > 1)
        {
            // RXCY format
            int x, y;
            x = y = 0;
            for(int i = 1; i < mark; i++)
            {
                x*=10;
                x+=s[i]-'0';
            }
            for(int i = mark+1; i < s.size(); i++)
            {
                y*=10;
                y+=s[i]-'0';
            }
            convert1(x, y);
        }
        else
        {
            // ABCD format
        }
    }    
    
    return 0;
}
