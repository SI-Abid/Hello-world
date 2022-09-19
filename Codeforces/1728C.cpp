#include<bits/stdc++.h>
// #include<bits/mathcalls.h>
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
        vector<int> a(n), b(n);
        int cnt=0;
        map<int,int> ma;
        map<int,int> mb;
        for (size_t i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]>9)
            {
                a[i]=log10(a[i]);
                cnt++;
            }
            // if(ma[a[i]]!=0)
            // {
            //     a[i]=1;
            //     cnt++;
            // }
            ma[a[i]]++;
        }
        for (size_t i = 0; i < n; i++)
        {
            cin>>b[i];
            if(b[i]>9)
            {
                b[i]=log10(b[i]);
                cnt++;
            }
            // if(mb[b[i]]!=0)
            // {
            //     b[i]=1;
            //     cnt++;
            // }
            mb[b[i]]++;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout<<cnt<<endl;
        for (size_t i = 0; i < n; i++)
        {
            // ma[a[i]]++;
            cout<<a[i]<<' ';
        }
        cout<<endl;
        for (size_t i = 0; i < n; i++)
        {
            // mb[b[i]]++;
            cout<<b[i]<<' ';
        }
        cout<<endl;
        for(auto [k1,v1]:ma)
        {
            if(mb[k1]!=0)
            {
                cnt+=abs(v1-mb[k1]);
                mb.erase(k1);
                // ma.erase(k1);
            }
        }
        for(auto [k1,v1]:mb)
        {
            if(ma[k1]!=0)
            {
                cnt+=abs(v1-mb[k1]);
                ma.erase(k1);
                // ma.erase(k1);
            }
        }
        cout<<ma.size()<<' '<<mb.size()<<' ';
        cout<<" == "<<cnt<<endl;
    }
    return 0;
}