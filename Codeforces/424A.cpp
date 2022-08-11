#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        cnt += s[i]=='X'?1:-1;
    }
    if(cnt==0)
    {
        cout<<cnt<<endl<<s<<endl;
    }
    else
    {
        if(cnt>0)
        {
            
            for(auto &x:s)
            {
                ans++;
                if(x=='X')
                {x='x';
                cnt--;}
                if(cnt==n/2)
                {
                    break;
                }
            }
            cout<<ans<<endl<<s<<endl;
        }
        else
        {
            // cout<<-cnt<<endl;
            for(auto &x:s)
            {
                ans++;
                if(x=='x')
                {
                    x='X';
                    cnt--;
                }
                if(cnt==-n/2)
                {
                    break;
                }
            }
            cout<<ans<<endl<<s<<endl;
        }
    }
    return 0;
}