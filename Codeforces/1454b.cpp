#include "bits/stdc++.h"
using namespace std;
int main()
{
    // freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        bool found=false;
        cin>>n;
        int ar[n]={0};
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            ar[x-1]++;
            v.push_back(x);
        }
        int bid=0;
        for(int i=0; i<n; i++)
        {
            if(ar[i]==1)
            {
                bid=i+1;
                found=true;
                break;
            }
        }
        if(!found)
            puts("-1");
        else
        {
            for(int i=0;i<n;i++)
            {
                if(v[i]==bid)
                    cout<<i+1<<endl;
            }
        }
            
    }
    return 0;
}