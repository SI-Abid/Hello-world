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
        int m;
        cin >> m;
        if (m < n)
        {
            cout << "NO\n";
            continue;
        }
        if (m % n == 0)
        {
            cout << "YES\n";
            for (int i = 1; i <= n; i++)
            {
                cout << m / n << " ";
            }
            cout << '\n';
        }
        else if (n & 1)
        {
            cout << "YES\n";
            cout << m - n + 1<< " ";
            for (int i = 2; i <= n; i++)
            {
                cout << 1 << " ";
            }
            cout <<'\n';
        }
        else
        {
            if (m % 2 == 0)
            {
                cout << "YES\n";
                cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << " ";
                for (int i = 3; i <= n; i++)
                {
                    cout << 1 << " ";
                }
                cout << '\n';
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}