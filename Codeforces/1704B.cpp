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
        for(int i=0;i<n;i++)
        {
            int mn=a[i];
            int mx=a[i];
            for(int j=i+1;j<n;j++)
            {
                mn=min(mn,a[j]);
                mx=max(mx,a[j]);
                if(mx-mn>x+x)
                {
                    cnt++;
                    i=j-1;
                    break;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
