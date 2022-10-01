#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,vector<int>>mp;
    mp['2']={2};
    mp['3']={3};
    mp['4']={2,2,3};
    mp['5']={5};
    mp['6']={3,5};
    mp['7']={7};
    mp['8']={2,2,2,7};
    mp['9']={3,3,2,7};
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<mp[s[i]].size();j++)
        {
            ans.push_back(mp[s[i]][j]);
        }
    }
    sort(ans.begin(),ans.end(),greater<int>());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}