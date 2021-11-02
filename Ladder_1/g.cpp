#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0,oc=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]&1)  oc++;
    }
    if(sum&1){
        cout<<oc<<endl;
    }
    else{
        cout<<n-oc<<endl;
    }
    
    return 0;
}