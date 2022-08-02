#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans=0;
    for(int i=0;i<k;i++)
        ans+=v[i];
    int sum=ans;
    int idk=0;
    for(int i=k;i<n;i++)
    {
        sum+=v[i]-v[i-k];
        if(sum<ans)
        {
            ans=sum;
            idk=i-k+1;
        }
    }
    cout<<idk+1;
    return 0;
}