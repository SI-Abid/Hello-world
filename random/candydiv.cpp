//https://codeforces.com/contest/1283/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int kid = n - n%k;
        kid += min(n%k, k/2);
        cout<<kid<<endl;
    }
    return 0;
}
