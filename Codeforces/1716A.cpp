#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        int ans = 0;
        while (n)
        {
            if(n%3==0)
            {
                ans+=n/3;
                n=0;
            }
            else if(n>=5)
            {
                ans+=2;
                n-=5;
            }
            else if(n%2==0)
            {
                ans+=n/2;
                n%=2;
            }
            else if(n==1)
            {
                ans+=2;
                n=0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}