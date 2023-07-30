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
        string s;
        cin >> s;
        if (n & 1)
        {
            cout << "-1\n";
            continue;
        }
        vector<int> a(n);
        int col = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        bool swapped = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                cnt1++;
            else
                cnt2++;
            if (cnt2 > cnt1)
                col ^= 1, swapped = true;
            if (cnt1 > cnt2)
                col ^= 1, swapped = true;
            a[i] = col;
        }
        if (swapped)
        {
            cout<< "2\n";
        }
        else
        {
            cout << "1\n";
        }
        for (auto x : a)
            cout << x+1 << " ";
        cout << '\n';
    }
    return 0;
}