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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool ok=true;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if(b[i]!=0)
                mn = min(mn, a[i] - b[i]);
        }
        if(mn<0)
        {
            cout << "NO\n";
            continue;
        }
        if(mn==INT_MAX)
        {
            cout << "YES\n";
            continue;
        }

        for (size_t i = 0; i < n; i++)
        {
            if(a[i]-b[i]>mn) ok=false;
            if(b[i]!=0 and a[i]-b[i]<mn) ok=false;
        }
        cout << (ok?"YES":"NO") << '\n';
    }
    return 0;
}