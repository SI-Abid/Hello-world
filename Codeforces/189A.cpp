#include <bits/stdc++.h>
using namespace std;

int st[4005];

int dp(int n, int &a, int &b, int &c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN;
    // if(n == a || n == b || n == c)
    //     return 1;
    // if(n < a || n < b || n < c)
    //     return 0;
    if (st[n] != -1)
        return st[n];
    // return max({1+dp(n - a, a, b, c), 1+dp(n - b, a, b, c), 1+dp(n - c, a, b, c)});
    return st[n] = max({1 + dp(n - a, a, b, c), 1 + dp(n - b, a, b, c), 1 + dp(n - c, a, b, c)});
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    memset(st, -1, sizeof(st));
    cout << dp(n, a, b, c) << endl;

    return 0;
}