#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t, n;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;   
        int i=4*n;
        while(n--)
        {
            cout<<i<<" ";
            i-=2;
        }
        puts("");
    }
    return 0;
}