#include<bits/stdc++.h>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const set<T>& v)
{
    for(auto x: v)
    {
        os<<x<<" ";
    }
    return os;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    #endif

    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;
        cin>>s;
        set<char> st;
        int ans=0;
        // st.insert(s[0]);
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
            if(st.size()==4)
            {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        if(st.size())
        {
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}