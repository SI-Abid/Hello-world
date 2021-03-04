#include <bits/stdc++.h>
using namespace std;

int rsum[100],csum[100];

int main()
{
    freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    int m[n][n],d1=0,d2=0;
    // memset(m, 0, n);
    // memset (rsum,0,n);
    // memset (csum,0,n);
    //memset (d1,0,n);
    //memset (d2,0,n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>m[i][j];
            // cout<<m[i][j]<<" "<<rsum[i]<<" "<<csum[i]<<" ";
            rsum[i]+=m[i][j];
            csum[j]+=m[i][j];
        }
        // cout<<rsum[i]<<endl<<csum[i]<<endl;
    }
   
    for(int i=0; i<n; i++){
        d1+=m[i][i];
        d2+=m[i][n-i-1];
    }
    int mx=0;
    for(int i=0; i<n; i++){

        if(rsum[i]>mx){
            mx=rsum[i];
        }
        if(csum[i]>mx){
            mx=csum[i];
        }
    }
    // cout<<mx<<" "<<d1<<d2<<endl;
    mx=max(max(d1,d2),mx);
    cout<<mx<<endl;

    return 0;
}