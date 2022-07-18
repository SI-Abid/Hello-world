#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n, q;
        cin>>n>>q;
        string s(n, '0');
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        for (int i = n-1; i >= 0; i--)
        {
            if(a[i]<=cnt)
            {
                s[i]++;
            }
            else if(cnt< q)
            {
                s[i]++;
                cnt++;
            }
        }
        cout<<s<<'\n';
    
    }
    return 0;
}