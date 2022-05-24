#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        if(n&1)
        {
            cnt=1;
            for(int i=n/2+1;i<n;i++)
            {
                if(s[i]==s[n-i-1] and s[i]==s[n/2])
                {
                    cnt+=2;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            for(int i=n/2;i<n;i++)
            {
                if(s[i]==s[n-i-1] and s[i]==s[n/2])
                {
                    cnt+=2;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}