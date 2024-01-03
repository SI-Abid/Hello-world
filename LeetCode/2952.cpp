#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
class Solution
{
public:
    int minimumAddedCoins(vector<int> &a, int target)
    {
        sort(begin(a), end(a));
        ll ans = 0;
        ll sum = 0;
        for (int i = 0; i < a.size(); i++)
        {
            // if(sum>=target)break;
            while (a[i] - sum > 1)
            {
                ll exp = log2(sum) + 1;
                ll x = 1LL << exp;
                sum += x;
                ans++;
            }
            sum += a[i];
        }
        while (sum < target)
        {
            ll exp = log2(sum) + 1;
            ll x = 1LL << exp;
            sum += x;
            ans++;
        }
        return ans;
    }
};

signed main()
{
    vector<int> a = {1, 1, 1};
    cout << minimumAddedCoins(a, 20);
    return 0;
}