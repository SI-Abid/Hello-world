#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    vector<ll> frwd(n);
    vector<ll> bkwd(n);
    frwd[0] = bkwd[n - 1] = 0;
    for (int i = 1; i < n; i++)
    {
        frwd[i] = frwd[i - 1] + (h[i - 1] > h[i] ? h[i - 1] - h[i] : 0);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        bkwd[i] = bkwd[i + 1] + (h[i + 1] > h[i] ? h[i + 1] - h[i] : 0);
    }
    while(m--)
    {
        int s, t;
        cin >> s >> t;
        s--, t--;
        if(t>s)
        {
            cout<<frwd[t]-frwd[s]<<'\n';
        }
        else
        {
            cout<<bkwd[t]-bkwd[s]<<'\n';
        }
    }
    return 0;
}