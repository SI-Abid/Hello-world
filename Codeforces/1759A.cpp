#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;
        cin>>s;
        int n=s.size();
        string x="";
        int l=(n/3)+3;
        for(int i=0;i<l;i++)
        {
            x+="Yes";
        }
        // if s is a substring of x
        if(x.find(s)!=string::npos)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}