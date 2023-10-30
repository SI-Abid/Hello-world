#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

const int mod = 1000000007;

vector<vector<ll>> mul(vector<vector<ll>> &a, vector<vector<ll>> &b)
{
    vector<vector<ll>> result(4, vector<ll>(4, 0));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                result[i][j] = (result[i][j] + (a[i][k] * b[k][j]) % mod) % mod;
            }
        }
    }
    return result;
}

ll matPow(vector<vector<ll>> base, ll exp)
{
    int size = base.size();
    vector<vector<ll>> result(size, vector<ll>(size, 0));

    for (int i = 0; i < size; i++)
    {
        result[i][i] = 1;
    }

    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = mul(result, base);
        }
        base = mul(base, base);
        exp /= 2;
    }

    return result[0][0];
}

signed main()
{
    vector<vector<ll>> mat(4);
    for (int i = 0; i < 4; i++)
    {
        mat[i].resize(4);
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = (i != j);
        }
    }
    int n;
    cin >> n;
    cout << matPow(mat, n) << nl;
    return 0;
}