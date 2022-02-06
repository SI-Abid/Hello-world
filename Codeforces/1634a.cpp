#include<bits/stdc++.h>
using namespace std;

bool ip(string s)
{
    string t=s;
    reverse(s.begin(),s.end());
    return s==t;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        // bool ok=true;
        string s;
        cin>>n>>k>>s;
        if(k<2 or ip(s))
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
