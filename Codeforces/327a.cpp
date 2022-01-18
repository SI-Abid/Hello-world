#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt1=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt1+=(a[i]&1);
    }
    int ans=0;
    if(n==1)
    {
        cout<<(a[0]^1)<<endl;
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=0;
            for(int k=0;k<n;k++)
            {
                temp+=a[k]^(k>=i&&k<=j);
            }
            ans=max(ans,temp);
        }
    }
    if(cnt1==ans)
    {
        ans--;
    }
    cout<<ans<<endl;
    return 0;
}