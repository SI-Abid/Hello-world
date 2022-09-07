#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        set<int> st1;
        st.push(0);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                st.push(s[i+1]);
            else
            {
                st.pop();
                st1.insert(st.top());
            }
        }
        cout<<st1.size()<<'\n';
    }
    return 0;
}