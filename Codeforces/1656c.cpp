#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        bool one=false;
        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]==1) one=true;
        }
        sort(v.begin(),v.end());
        if(one==false)
        {
            puts("YES");
            continue;
        }
        bool ok=false;
        for (size_t i = 0; i < n-1; i++)
        {
            if(v[i+1]-v[i]==1)
                ok=true;
        }
        puts((one and not ok)?"YES":"NO");
    }
    return 0;
}