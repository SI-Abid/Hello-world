#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        // set<int> s;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if((sum-a[i])==a[i]*(n-1))
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}