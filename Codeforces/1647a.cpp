#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        if (n % 3 == 0)
        {
            n /= 3;
            while (n--)
                cout << "21";
            cout << endl;
            continue;
        }
        if (n % 3 == 1)
        {
            n /= 3;
            cout << "1";
            while (n--)
                cout << "21";
            cout << endl;
            continue;
        }
        if (n % 3 == 2)
        {
            n /= 3;
            cout << "2";
            while (n--)
                cout << "12";
            cout << endl;
            
        }
    }
    return 0;
}