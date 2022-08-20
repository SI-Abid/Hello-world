#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        if(n==1)
        {
            if(s/k==b)
            {
                cout<<s<<'\n';
            }
            else
            {
                cout<<-1<<'\n';
            }
            continue;
        }
        if(s/k==b)
        {
            for(int i=0;i<n-1;i++)
            {
                cout<<"0 ";
            }
            cout<<s<<"\n";
            continue;
        }
        long long low,high;
        low=b*k;
        high=low+n*(k-1);
        if(s>=low and s<=high)
        {
            long long tmp = min(s,b*k+k-1);
            cout<<tmp;
            s-=tmp;
            for(int i=0;i<n-1;i++)
            {
                if(s>0)
                {
                    cout<<" "<<min(s,k-1);
                    s-=min(s,k-1);
                }
                else
                {
                    cout<<" 0";
                }
            }
            cout<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}