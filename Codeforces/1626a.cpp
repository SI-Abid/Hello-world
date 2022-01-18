#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int cnt[26];
        memset(cnt,0,sizeof(cnt));
        for (int i=0;i<s.size();i++)
        {
            cnt[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            while(cnt[i]-->0)
            {
                cout<<(char)(i+'a');
            }
        }
        cout<<endl;
    }
    
    return 0;
}