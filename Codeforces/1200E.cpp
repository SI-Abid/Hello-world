#include<bits/stdc++.h>
using namespace std;
// longest prefix which is also suffix using KMP
int lps(string &s)
{
    int n = s.size();
    int lps[n+5];
    lps[0] = 0;
    int len = 0;
    int i = 1;
    while(i < n)
    {
        if(s[i] == s[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len != 0)
            {
                len = lps[len-1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps[n-1];
}
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string s = v[0];
    for(int i=1;i<n;i++)
    {
        string t;
        if(v[i].size()<s.size())
        {
            t = v[i]+"#"+s.substr(s.size()-v[i].size(),v[i].size());
        }
        else
        {
            t = v[i].substr(0,s.size())+"#"+s;
        }
        int ans = lps(t);
        // cout<<t<<' '<< ans<< endl;
        s+=v[i].substr(ans,v[i].size()-ans);
    }
    cout << s << endl;
    return 0;
}