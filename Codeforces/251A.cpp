#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > ans)
        {
            ans = v[i];
        }
        ans++;
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] > ans)
        {
            ans = v[i];
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}