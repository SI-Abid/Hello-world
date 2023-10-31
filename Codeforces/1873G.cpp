#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

template<typename T, typename T_iterable>
vector<pair<T, int>> run_length_encoding(const T_iterable &items) {
    vector<pair<T, int>> runs;
    T previous;
    int count = 0;
 
    for (const T &item : items)
        if (item == previous) {
            count++;
        } else {
            if (count > 0)
                runs.emplace_back(previous, count);
 
            previous = item;
            count = 1;
        }
 
    if (count > 0)
        runs.emplace_back(previous, count);
 
    return runs;
}

void solve()
{
    string S;
    cin >> S;
    vector<pair<char, int>> encoding = run_length_encoding<char>(S);
    bool enough = encoding.front().first == 'B' || encoding.back().first == 'B';
 
    for (auto &pr : encoding)
        if (pr.first == 'B' && pr.second >= 2)
            enough = true;
 
    int a_sum = 0, a_min = INT32_MAX;
 
    for (auto &pr : encoding)
        if (pr.first == 'A') {
            a_sum += pr.second;
            a_min = min(a_min, pr.second);
        }
 
    if (enough)
        cout << a_sum << '\n';
    else
        cout << max(a_sum - a_min, 0) << '\n';
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