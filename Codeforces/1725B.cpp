#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.rbegin(),v.rend());
    long long ans=0;
    for(long long x:v)
    {
        long long need=(d+x-1)/x;
        if(n>=need)
        {
            ans++;
            n-=need;
        }
        else break;
    }
    cout<<ans<<endl;
    return 0;
}