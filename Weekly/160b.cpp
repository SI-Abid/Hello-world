#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    bool ok=false;
    for (int i = 0; i < n-2 and !ok; i++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            ok=true;
        }
    }
    cout<< (ok ? "YES" : "NO") << '\n';
    return 0;
}