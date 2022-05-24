#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        set<int> a;
        int cnt=0;
        for(int i=0,x;i<n;i++)
        {
            cin>>x;
            a.insert(x);
            if(x!=0)cnt++;
        }
        if(cnt!=n)
        {
            cout<<cnt<<"\n";
        }
        else if(a.size()==n)
        {
            cout<<n+1<<"\n";
        }
        else
        {
            cout<<n<<"\n";
        }
    }
    return 0;
}