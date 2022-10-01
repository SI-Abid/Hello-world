#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n; cin>>n;
        vector<int> x(n),tt(n);
        ll allx=0,allt=0;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            allx+=x[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>tt[i];
            allt+=tt[i];
        }
        // auto [low,high]=minmax_element(x.begin(),x.end());
        // ternary search for finding the answer
        double l=0,r=1e9;
        while(r-l>1e-6)
        {
            double m1=l+((r-l)/3.0);
            double m2=r-((r-l)/3.0);
            double f1=0,f2=0;
            for(int i=0;i<n;i++)
            {
                f1+=abs(x[i]-m1)+tt[i];
                f2+=abs(x[i]-m2)+tt[i];
            }
            if(f1<f2)
            {
                r=m2;
            }
            else
            {
                l=m1;
            }
        }
        cout<<fixed<<setprecision(6)<<l<<endl;
    }
    return 0;
}