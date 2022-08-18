#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int up=0;
    for(int i=0;i<n;i++)
    {
        if(isupper(s[i]))
            up++;
    }
    if(up==n)
    {
        for (size_t i = 0; i < n; i++)
        {
            s[i]=tolower(s[i]);
        }
        
    }
    if(up == n-1 and islower(s[0]))
        for (size_t i = 0; i < n; i++)
        {
            if(i) s[i]=tolower(s[i]);
            else s[i]=toupper(s[i]);
        }
    cout<<s<<endl;
    return 0;
}