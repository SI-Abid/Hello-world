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
        if (n == 1)
        {
            cout << "1\n";
            continue;
        }
        if (n == 2)
        {
            cout << "2 4\n";
            continue;
        }
        int sum = 0;
        vector<int> v;
        for (size_t i = 0; i < n - 1; i++)
        {
            v.push_back(n - i);
            sum += (n - i);
        }
        int x = (((sum + n - 1) / n) * n) - sum;
        v.push_back(x);
        reverse(v.begin(), v.end());
        for (auto var : v)
        {
            cout << var << " ";
        }
        cout << "\n";
    }
    return 0;
}