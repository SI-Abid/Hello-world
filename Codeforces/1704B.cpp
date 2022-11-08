#include<bits/stdc++.h>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    for(auto i:v)
    {
        os<<i<<" ";
    }
    return os;
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // sort(a.begin(),a.end());
        // cout<<a<<endl<<x<<" ";
        int cnt=0;
        int mn=a[0];
        int mx=a[0];
        for(int j=0;j<n;j++)
        {
            mn=min(mn,a[j]);
            mx=max(mx,a[j]);
            if(mx-mn>x+x)
            {
                cnt++;
                mn=a[j];
                mx=a[j];
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
