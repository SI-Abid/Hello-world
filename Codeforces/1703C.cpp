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
        for (int &i:a)
            cin>>i;
        for (size_t i = 0; i < n; i++)
        {
            int x;
            string s;
            cin>>x>>s;
            for (char &c:s)
            {
                if(c=='D')
                {
                    if(a[i]==9)
                        a[i]=0;
                    else
                        a[i]++;
                }
                else
                {
                    if(a[i]==0)
                        a[i]=9;
                    else
                        a[i]--;
                }
            }
        }
        for(auto i:a)
            cout<<i<<' ';
        cout<<'\n';
    
    }
    return 0;
}