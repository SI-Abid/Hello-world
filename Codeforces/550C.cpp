#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int x;
    for(int i=0;i<n;i++)
    {
        if((s[i]-'0')%8==0)
        {
            cout<<"YES"<<endl;
            cout<<s[i]<<endl;
            return 0;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            x=10*(s[i]-'0')+(s[j]-'0');
            if(x%8==0)
            {
                cout<<"YES"<<endl;
                cout<<x<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                x = 100*(s[i]-'0') + 10*(s[j]-'0') + (s[k]-'0');
                if(x%8==0)
                {
                    cout<<"YES"<<endl;
                    cout<<x<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}