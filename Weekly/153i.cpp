#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long ans=0;
    for (int i = 1; i <= n; i++)
    {
        ans+=(1LL<<i);
    }
    cout<<ans<<endl;
    return 0;
}
/*
2 == 7 8 77 78 87 88
3 == 7 8 77 78 87 88 777 778 787 788 877 878 887 888
*/