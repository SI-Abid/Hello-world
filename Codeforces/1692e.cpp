#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        vector<int> pre1(n);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                pre1[i]=a[i]+a[n-1];
            }
            else
            {
                pre1[i]=pre1[i-1]+a[i]+a[n-1-i];
            }
        }
        if(sum==s)
        {
            cout<<"0\n";
            continue;
        }
        if(sum<s)
        {
            cout<<"-1\n";
            continue;
        }
        int dd=sum-s;
        int pos;
        for(int i=0;i<n;i++)
        {
            if(pre1[i]>=dd)
            {
                pos=2*(i+1);
                if()
            }
        }
        for(auto ss:pre1)
            cout<<ss<<" ";
        cout<<"\n## "<<dd<<" ## ";
        cout<< pos+1<<'\n';
    }
    return 0;
}