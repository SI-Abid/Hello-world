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
        set<int> st;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                st.insert(i);
            }
        }
        if(st.size()==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int l=*st.begin();
        int r=*st.rbegin();
        int sz=st.size();
        if(sz==r-l+1)
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