#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='>')
            {
                int tmp=1;
                while(i<n && s[i]=='>')
                {
                    tmp++;
                    i++;
                }
                v.push_back(tmp);
                i--;
            }
            else
            {
                int tmp=1;
                while(i<n && s[i]=='<')
                {
                    tmp++;
                    i++;
                }
                v.push_back(tmp);
                i--;
            }
        }
        cout<< *max_element(v.begin(),v.end()) <<endl;
    }
    return 0;
}