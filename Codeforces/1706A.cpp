#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n, m;
        cin>>n>>m;
        string s(m, 'B');
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int x: a)
        {
            int p = min(x, m+1-x);
            if(s[p-1]=='A')
            {
                s[m-p]='A';
            }
            else
            {
                s[p-1]='A';
            }
        }
        cout<< s<<'\n';
    }
    return 0;
}