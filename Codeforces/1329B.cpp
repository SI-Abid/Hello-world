#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

template <const int &MOD>
struct _m_int
{
    int val;

    _m_int(long long v = 0)
    {
        if (v < 0)
            v = v % MOD + MOD;
        if (v >= MOD)
            v %= MOD;
        val = v;
    }

    static int mod_inv(int a, int m = MOD)
    {
        // https://en.wikipedia.org/wiki/Extended_Euclidean_algorithm#Example
        int g = m, r = a, x = 0, y = 1;

        while (r != 0)
        {
            int q = g / r;
            g %= r;
            swap(g, r);
            x -= q * y;
            swap(x, y);
        }

        return x < 0 ? x + m : x;
    }

    explicit operator int() const { return val; }
    explicit operator long long() const { return val; }

    _m_int &operator+=(const _m_int &other)
    {
        val += other.val;
        if (val >= MOD)
            val -= MOD;
        return *this;
    }

    _m_int &operator-=(const _m_int &other)
    {
        val -= other.val;
        if (val < 0)
            val += MOD;
        return *this;
    }

    static unsigned fast_mod(uint64_t x, unsigned m = MOD)
    {
#if !defined(_WIN32) || defined(_WIN64)
        return x % m;
#endif
        // Optimized mod for Codeforces 32-bit machines.
        // x must be less than 2^32 * m for this to work, so that x / m fits in a 32-bit integer.
        unsigned x_high = x >> 32, x_low = (unsigned)x;
        unsigned quot, rem;
        asm("divl %4\n"
            : "=a"(quot), "=d"(rem)
            : "d"(x_high), "a"(x_low), "r"(m));
        return rem;
    }

    _m_int &operator*=(const _m_int &other)
    {
        val = fast_mod((uint64_t)val * other.val);
        return *this;
    }

    _m_int &operator/=(const _m_int &other)
    {
        return *this *= other.inv();
    }

    friend _m_int operator+(const _m_int &a, const _m_int &b) { return _m_int(a) += b; }
    friend _m_int operator-(const _m_int &a, const _m_int &b) { return _m_int(a) -= b; }
    friend _m_int operator*(const _m_int &a, const _m_int &b) { return _m_int(a) *= b; }
    friend _m_int operator/(const _m_int &a, const _m_int &b) { return _m_int(a) /= b; }

    _m_int &operator++()
    {
        val = val == MOD - 1 ? 0 : val + 1;
        return *this;
    }

    _m_int &operator--()
    {
        val = val == 0 ? MOD - 1 : val - 1;
        return *this;
    }

    _m_int operator++(int)
    {
        _m_int before = *this;
        ++*this;
        return before;
    }
    _m_int operator--(int)
    {
        _m_int before = *this;
        --*this;
        return before;
    }

    _m_int operator-() const
    {
        return val == 0 ? 0 : MOD - val;
    }

    bool operator==(const _m_int &other) const { return val == other.val; }
    bool operator!=(const _m_int &other) const { return val != other.val; }

    _m_int inv() const
    {
        return mod_inv(val);
    }

    _m_int pow(long long p) const
    {
        if (p < 0)
            return inv().pow(-p);

        _m_int a = *this, result = 1;

        while (p > 0)
        {
            if (p & 1)
                result *= a;

            a *= a;
            p >>= 1;
        }

        return result;
    }

    friend ostream &operator<<(ostream &stream, const _m_int &m)
    {
        return stream << m.val;
    }
};

int MOD = 998244353;
using mod_int = _m_int<MOD>;

void solve()
{
    int D;
    cin >> D >> MOD;
    mod_int ways = 1;

    for (int bit = 0; 1 << bit <= D; bit++)
    {
        int count = 1 << bit;

        if (1 << (bit + 1) > D)
            count = D - (1 << bit) + 1;

        ways = ways * (count + 1);
    }

    ways--;
    cout << ways << '\n';
}

signed main()
{
    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}