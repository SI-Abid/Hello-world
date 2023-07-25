#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout<<"YES\n";
            cout << n << endl;
            for (int i = 1; i <= n; i++)
            {
                cout << "1 ";
            }
            cout << endl;
            continue;
        }
        if (k == 2)
        {
            if (n % 2 == 0)
            {
                cout<<"YES\n";
                cout << n / 2 << endl;
                while (n>0)
                {
                    cout << "2 ";
                    n-=2;
                }
            }
            else
            {
                cout << "NO";
            }
            cout << endl;
        }
        else if (k >= 3)
        {
            cout<<"YES\n";
            if (n % 2 == 0)
            {
                cout << n / 2 << endl;
                while (n>0)
                {
                    cout << "2 ";
                    n-=2;
                }
            }
            else
            {
                cout << n / 2 << endl;
                cout<< "3 ";
                n -= 3;
                while (n>0)
                {
                    cout << "2 ";
                    n-=2;
                }
            }
            cout << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}