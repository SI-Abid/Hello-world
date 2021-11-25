#include <iostream>
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



const int MOD = 1e9 + 7;
const int INF = 1e9;

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x,y;
        x=min(a,b);
        y=max(a,b);
        if(y-x<=2)
            cout<<(y+x)/4<<endl;
        else
        {
            int ans=min(y/3,x);
            y-=ans*3;
            x-=ans;
            if(x==0)
                cout<<ans<<endl;
            else cout<<ans+(x+y)/4<<endl;
        }
        
    }
    
    return 0;
}
