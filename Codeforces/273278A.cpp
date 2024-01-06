#include <bits/stdc++.h>
using namespace std;

struct item
{
    long long seg, pref, suf, sum;

    item operator|(const item &other) // using as merge function
    {
        return {
            max(this->seg, max(other.seg, this->suf + other.pref)),
            max(this->pref, this->sum + other.pref),
            max(other.suf, other.sum + this->suf),
            this->sum + other.sum};
    }
};

struct segtree
{
    int size;
    vector<item> values;
    item NEUTRAL_ELEMENT = {0, 0, 0, 0};
    item single(int v)
    {
        if (v > 0)
            return {v, v, v, v};
        return {0, 0, 0, v};
    }
    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        values.resize(2 * size);
    }
    void build(vector<int> &a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < a.size())
            {
                values[x] = single(a[lx]);
            }
            return; // DONT MISS THIS LINE
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        values[x] = values[2 * x + 1] | values[2 * x + 2];
    }

    void build(vector<int> &a)
    {
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            values[x] = single(v);
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
            set(i, v, 2 * x + 1, lx, m);
        else
            set(i, v, 2 * x + 2, m, rx);
        values[x] = values[2 * x + 1] | values[2 * x + 2];
    }
    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }
    item calc(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r or l >= rx)
            return NEUTRAL_ELEMENT;
        if (lx >= l and rx <= r)
            return values[x];
        int m = (lx + rx) / 2;
        return calc(l, r, 2 * x + 1, lx, m) | calc(l, r, 2 * x + 2, m, rx);
    }
    item calc(int l, int r)
    {
        return calc(l, r, 0, 0, size);
    }
};

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    segtree st;
    st.init(n);
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    st.build(v);
    cout << st.calc(0, n).seg << "\n";
    while (m--)
    {
        int i, v;
        cin >> i >> v;
        st.set(i, v);
        cout << st.calc(0, n).seg << "\n";
    }
    return 0;
}
