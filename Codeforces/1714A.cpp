#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,h,m;
        cin>>n>>h>>m;
        int x = h*60+m;
        int ans=1440;
        while(n--)
        {
            int hh,mm;
            cin>>hh>>mm;
            int y = hh*60+mm;
            int dif = y-x;
            if(dif<0)
            {
                dif +=1440;
            }
            ans=min(dif,ans);
        }
        cout<<ans/60<<" "<<ans%60<<'\n';
    }
    return 0;
}