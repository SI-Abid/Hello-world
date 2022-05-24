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
        set<char> st;
        int i;
        for(i=0;i<n;i++)
        {
            if(st.find(s[i])==st.end())
            {
                st.insert(s[i]);
            }
            else break;
        }
        bool ok=true;
        for(int k=i;k<n;k++)
        {
            if(s[k]!=s[k-i])
            {
                ok=false;
            }
        }
        puts(ok?"YES":"NO");
    }
    return 0;
}