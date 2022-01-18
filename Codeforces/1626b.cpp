#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        bool found=false;
        int sod=0;
        int j=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]+s[i+1]-96>9)
            {
                found=true;
                sod=s[i]+s[i+1]-96;
                j=i;
            }
        }
        if(found)
        {
            for(int i=0;i<j;i++)
                cout<<s[i];
            cout<<sod;
            for(int i=j+2;i<n;i++)
                cout<<s[i];
        }
        else
        {
            cout<<s[0]+s[1]-96;
            for(int i=2;i<n;i++)
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}