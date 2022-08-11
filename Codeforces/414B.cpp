#include<bits/stdc++.h>
using namespace std;

int state[2005][2005];

int dp(int pos, int last, int &n, int &k)
{
    if (pos == k) return 1;
    if (state[pos][last] != -1) return state[pos][last];
    int ret = 0;
    for (int i = last; i <= n; i+=last)
    {
        ret = (ret + dp(pos + 1, i, n, k))%1000000007;
    }
    return state[pos][last]=ret;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    memset(state, -1, sizeof(state));
    cout<< dp(0, 1, n, k)<<endl;
    return 0;
}