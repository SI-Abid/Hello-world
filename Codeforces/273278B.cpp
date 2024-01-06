#include <bits/stdc++.h>
using namespace std;

struct segtree
{
    int size;
    vector<int> values;
    int NEUTRAL_ELEMENT = 0;
    int single(int v)
    {
        return v;
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
        values[x] = values[2 * x + 1] + values[2 * x + 2];
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
        values[x] = values[2 * x + 1] + values[2 * x + 2];
    }
    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }
    int calc(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r or l >= rx)
            return NEUTRAL_ELEMENT;
        if (lx >= l and rx <= r)
            return values[x];
        int m = (lx + rx) / 2;
        return calc(l, r, 2 * x + 1, lx, m) + calc(l, r, 2 * x + 2, m, rx);
    }
    int calc(int l, int r)
    {
        return calc(l, r, 0, 0, size);
    }

    int find(int k, int x, int lx, int rx)
    {
        if (rx - lx == 1)
            return lx;
        int m = (lx + rx) / 2;
        int sl = values[2 * x + 1];
        if (k < sl)
        {
            return find(k, 2 * x + 1, lx, m);
        }
        else
        {
            return find(k, 2 * x + 2, m, rx);
        }
    }

    int find(int k)
    {
        return find(k, 0, 0, size);
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
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {

            int i;
            cin >> i;
            v[i] = 1 - v[i];
            st.set(i, v[i]);
        }
        else
        {
            int k;
            cin >> k;
            cout << st.find(k) << "\n";
        }
    }
    return 0;
}
