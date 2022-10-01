#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;
        cin>>s;
        int n=s.size();
        int i=0;
        string ans="";
        for(char d='0';d<='9';d++)
        {
            int cnt=0;
            for(int j=i;j<n;j++)
            {
                if(s[j]==d)
                {
                    cnt++;
                    i=j+1;
                }
            }
            cout<<d<<' '<<cnt<<endl;
            if(cnt==0)
            {
                i=0;
            }
            else
            {
                while(cnt--)
                {
                    ans+=d;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}