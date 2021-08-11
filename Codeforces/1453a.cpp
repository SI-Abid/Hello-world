#include "bits/stdc++.h"
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, cnt=0, x;
        cin>>n>>m;
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<m;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i]==b[j])
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}