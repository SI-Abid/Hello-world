#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<bool> got(n + 1, 0);
    set<int, greater<int>> s;
    int need = n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        got[x] = true;
        if (x == need)
        {
            while (got[need])
            {
                cout << need << " ";
                need--;
            }
        }
        cout << endl;
    }

    return 0;
}