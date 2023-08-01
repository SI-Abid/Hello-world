#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        auto containsPowerOfTwo = [](int x) -> bool
        {
            for(int i=2;i<32;i++)
                if(x==(1<<i))
                    return true;
            return false;
        };
        auto containsPrimeWithTwo = [](int x) -> bool
        {
            if (x % 2 == 0)
                x /= 2;
            else return false;  //
            if (x == 1)
                return false;
            for (int i = 2; i * i <= x; i++)
            {
                if (x % i == 0)
                    return false;
            }
            return true;
        };
        if(n==1 or containsPowerOfTwo(n) or containsPrimeWithTwo(n))
            cout << "FastestFinger" << '\n';
        else
            cout << "Ashishgup" << '\n';
    }
    return 0;
}