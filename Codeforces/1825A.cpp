#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s)
{
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
            return false;
    }
    return true;
}

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;cin>>s;
        int n=s.length();
        int ans=0;
        // longest non palindromic substring
        for(int i=0;i<n;i++)
        {
            string t="";
            for(int j=i;j<n;j++)
            {
                t+=s[j];
                if(!ispalindrome(t))
                    ans=max(ans,j-i+1);
            }

        }
        cout<< (ans==0?-1:ans) <<"\n";
    }
    return 0;
}