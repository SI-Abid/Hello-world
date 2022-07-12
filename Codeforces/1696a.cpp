#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--)
    {
        int n,z;
        cin>>n>>z;
        int mx=0;
        vector<int> a(n);
        for (int i = 0, tmp; i < n; i++)
        {
            cin>>tmp;
            z = max(z, z&tmp);
            a[i] = tmp;
        }
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]|z);
        }
        
        cout<< mx <<'\n';
    }
    return 0;
}