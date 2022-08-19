#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        bool po=false, mo=false, ok=true;

        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]<b[i] && po)
                {
                    ok=true;
                }
                else if(a[i]>b[i] && mo)
                {
                    ok=true;
                }
                else
                {
                    ok=false;
                    break;
                }
                /*
                if(po && mo)
                {
                    ok=true;
                    break;
                }*/
            }
            if(a[i]==1)
                {
                    po=true;
                }
                if(a[i]==-1)
                {
                    mo=true;
                }
        }
        ok?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
