#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int mn, mx, cnt=0;
    mn=mx=a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]>mx || a[i]<mn)
        {
            cnt++;
        }
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    cout<<cnt<<endl;
    return 0;
}