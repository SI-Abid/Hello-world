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

ll FACT[11];

void makefact();
int fact(int n);

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    makefact();
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<": ";
    
        int ord;
        string eq;
        cin>>ord;
        cin.ignore();
        getline(cin, eq);

        // 10 * x ^ 7 
        string out="";
        ll co=1, po=0;
        if(ord==0) out=eq;
        else
        {
            for(int j=0; j<eq.size(); j++)
            {
                if(eq[j]=='X')
                {
                    po=1;
                    if(j-2>=0 && isdigit(eq[j-2])) // coeficient
                    {
                        co=eq[j-2]-48;
                        if(j-3>=0 && isdigit(eq[j-3]))
                        {
                            co+= (eq[j-3]-48)*10;
                        }
                    }
                    if(j+2<eq.size() && isdigit(eq[j+2])) //power
                    {
                        po=eq[j+2]-48;
                        
                        if(j+3<eq.size() && isdigit(eq[j+3]))
                        {
                            po= po*10 + (eq[j+3]-48);
                        }
                    }
                }
                if(po>=ord)
                {
                    co*=(FACT[po]/FACT[po-ord]);
                    po-=ord;
                    out+=to_string(co);
                    if(po>0)
                        out+="*X";
                    if(po>1)
                    {
                        out+="^";
                        out+=to_string(po);
                    }
                    if(j<eq.size())
                        out+=" + ";
                    po=0, co=1;
                }
                
            }
        }
        if(out[out.size()-1]==' ')
        {
            out.pop_back();
            out.pop_back();
            out.pop_back();
        }
        if(out.size())
            cout<<out<<endl;
        else 
            cout<<"0\n";
    }

    return 0;
}

void makefact()
{
    memset(FACT, 1, sizeof(FACT));
    
    for(int i=0; i<11; i++)
    {
        FACT[i]=fact(i);
    }
}

int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
