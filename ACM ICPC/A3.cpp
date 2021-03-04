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

bool isPalindrom(int);
int count_palindrom(int, int);

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    cout<<count_palindrom(22, 121)<<endl;
    
    //2530    /  11  =  230

    // ans is divisible by the number of palindrom in the range

    return 0;
}

bool isPalindrom(int n)
{
    if(n/10==0)
        return true;
    
    int m=n, rev=0;
    while(n)
    {
        rev*=10;
        rev+= n%10;
        n/=10;
    }
    // cout<<rev<<" "<<n<<endl;
    return (m==rev)?true:false;
}

int count_palindrom(int l, int r)
{
    int cnt=0;
    while(l<=r)
    {
        if(isPalindrom(l))
            cnt++ , cout<<l<<endl;
        
        l++;
    }
    return cnt;
}

