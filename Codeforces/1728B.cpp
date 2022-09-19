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
        if (n & 1)
        {

            for (int i = n - 4; i >= 1; i--)
            {
                cout << i << ' ';
            }
            cout << n - 3 << ' ' << n - 2 << ' ' << n - 1 << ' ' << n << '\n';
        }
        else
        {

            for (int i = n - 2; i >= 2; i--)
            {
                cout << i << ' ';
            }
            cout << 1 << ' ' << n - 1 << ' ' << n << '\n';
        }
    }
    return 0;
}