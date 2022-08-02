#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.rbegin(),v.rend());
    int ans=0;
    int cnt=0;
    for (int i = 0; i < n; i++,cnt++)
    {
        ans+=v[i];
        if(ans+ans>sum)
        {
            break;
        }
    }
    cout<<cnt+1;
    return 0;
}