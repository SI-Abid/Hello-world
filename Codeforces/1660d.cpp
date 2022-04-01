#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define LIM 5000000
typedef long long ll;
int n, test, k, m;
vector<int> v;

int findB(int start)
{
    int cnt = 0;
    for (int i = start; i >= 0 && v[i]; i--)
        cnt += abs(v[i]) == 2;
    return cnt;
}
int findF(int start)
{
    int cnt = 0;
    for (int i = start; i < n && v[i]; i++)
        cnt += abs(v[i]) == 2;
    return cnt;
}

int main(int argc, char const *argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);


    cin >> test;
    while (test--)
    {
        cin >> n;
        v.clear();
        v.resize(n);
        int lastZero = -1;
        int cnt = 0, cnt2 = 0;
        int l = -1, ansl = -1;
        int r = -1, ansr = -1;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        v.push_back(0);
        n++;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (cnt % 2 != 0) // negative
                {
                    if (findB(l) < findF(r))
                    {
                        cnt2 -= findB(l++);
                        r = n - i - 1;
                    }
                    else
                    {
                        cnt2 -= findF(r);
                        l = lastZero + 1;
                        r = n - r - 1;
                    }
                }
                else
                    l = lastZero + 1, r = n - i - 1;
                if (ans < cnt2)
                {
                    ans = cnt2;
                    ansl = l;
                    ansr = r;
                }
                l = -1;
                r = -1;
                cnt = 0;
                cnt2 = 0;
                lastZero = i;
            }
            cnt += v[i] < 0;
            cnt2 += abs(v[i]) == 2;

            if (l < 0 && v[i] < 0)
                l = i;
            r = v[i] < 0 ? i : r;
        }

        ansl = max(0, ansl);
        ansr = max(0, ansr);

        cout << ansl << " " << ansr << endl;
    }

    return 0;
}
