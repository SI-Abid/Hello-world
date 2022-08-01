#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int> m;
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(m.find(a[i])!=m.end())
            {
                break;
            }
            m[a[i]]++;
            cnt++;
        }
        cout<<n-cnt<<"\n";
    }
    return 0;
}