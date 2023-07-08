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
        set<string> st;
        for(int i=1;i<n;i++)
        {
            string temp="";
            temp+=s[i-1];
            temp+=s[i];
            st.insert(temp);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}