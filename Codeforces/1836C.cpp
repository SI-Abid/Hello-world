#include <bits/stdc++.h>
using namespace std;

int power(int a, int e)
{
    if (e == 0)
        return 1;
    return e == 1 ? a : a * power(a, e - 1);
}

void print(int a, int b)
{
    cout << a << " + " << b << " = " << a + b << '\n';
}

void solve()
{
    int a, b, c;
    long long k;
    cin >> a >> b >> c >> k;
    for (int i = power(10, a - 1); i < power(10, a); i++)
    {
        int left = max(power(10, b - 1), power(10, c - 1) - i);
        int right = min(power(10, b) - 1, power(10, c) - 1 - i);
        if (left > right)
            continue;

        int rem = right - left + 1;
        if (rem >= k)
        {
            print(i, left + k - 1);
            return;
        }
        k -= rem;
    }
    printf("-1\n");
}

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        solve();
    }
    return 0;
}