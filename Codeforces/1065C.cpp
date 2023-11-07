#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int N, K;
    cin >> N >> K;
    vector<int> H(N);
 
    for (int &h : H)
        scanf("%d", &h);
 
    sort(H.rbegin(), H.rend());
    int goal = H.back();
    int index = 0, count = 0, slices = 0;
 
    for (int height = H[0]; height >= goal; height--) {
        while (index < N && H[index] > height)
            index++;
 
        if (count + index > K) {
            count = 0;
            slices++;
        }
 
        count += index;
    }
 
    if (count > 0) {
        count = 0;
        slices++;
    }
    cout << slices << nl;
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}