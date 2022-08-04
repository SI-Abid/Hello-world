#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long ans=1;
    int cnt[26]={0};
    for(int i=0;i<m;i++)
    {
        memset(cnt,0,sizeof(cnt));
        for(int j=0;j<n;j++)
        {
            cnt[a[j][i]-'A']++;
        }
        int tmp=0;
        for(int j=0;j<26;j++)
        {
            if(cnt[j])
            {
                tmp++;
            }
        }
        ans=(ans*tmp)%1000000007;
    }
    cout<<ans<<endl;
    return 0;
}