#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int crime;
    cin >> n;
    int ans = 0;
    int mx = 0;
    while(n--)
    {
        cin >> crime;
        ans += crime;
        mx=min(mx,ans);
    }
    cout << -mx << endl;
    return 0;
}