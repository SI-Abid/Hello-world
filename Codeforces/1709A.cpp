#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int x;
        cin>>x;
        vector<int> a(4);
        for(int i=1;i<4;i++)
        {
            cin>>a[i];
        }
        int cnt=1;
        while(a[x]!=0)
        {
            cnt++;
            x=a[x];
        }
        cout<< (cnt==3?"YES":"NO")<<'\n';
    }
    return 0;
}