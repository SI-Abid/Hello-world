#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        int tot=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            tot+=a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]==a[n-1])
        {
            cout<<"0\n";
            continue;
        }
        int x = a[0];
        cout<<tot-(n*x)<<"\n";
    }
    return 0;
}