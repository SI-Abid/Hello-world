#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<ll> a(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd == 0)
        {
            cout << "Alice\n";
        }
        else if(even==0)
        {
            if(n%4==1)
            {
                cout<<"Bob\n";
            }
            else
            {
                cout<<"Alice\n";
            }
        }
        else if(odd==1 and even==1)
        {
            cout<<"Alice\n";
        }
        else if (odd == even)
        {
            cout << "Bob\n";
        }
        else if(n>2 and odd==1)
        {
            if(n%2==0)
            {
                cout<<"Alice\n";
            }
            else
            {
                cout<<"Bob\n";
            }
        }
        else
        {
            int ans = (odd + 1) / 2;
            if (ans and (ans) % 2 == 0)
            {
                cout << "Alice\n";
            }
            else
            {
                cout << "Bob\n";
            }
        }
    }
    return 0;
}