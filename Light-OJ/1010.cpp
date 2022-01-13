#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int c = 1; c <= t; c++)
    {
        cout << "Case " << c << ": ";
        int a, b, ans;
        cin >> a >> b;
        if (a == 1 or b == 1)
        {
            cout << max(a, b) << endl;
            continue;
        }
        ans = a * b;
        if (a == 2 or b == 2)
        {
            cout << (ans / 8) * 4 + ((ans % 8) >= 4 ? 4 : ans % 8) << endl;
            continue;
        }
        
        cout << (ans+1) / 2 << endl;
    }
    return 0;
}