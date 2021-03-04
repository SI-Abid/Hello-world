#include"bits/stdc++.h"
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    for(int q=1; q<=t; q++)
    {
        int x, mx, pos=0;
        cin>>x;
        mx=x^arr[0];
        for(int i=1;i<n;i++)
        {   
            if((x^arr[i])>mx)
            {
                mx=x^arr[i];
                pos=i;
            }
        }
        printf("Query %d: %d %d\n",q,pos+1,mx);
    }
    return 0;
}