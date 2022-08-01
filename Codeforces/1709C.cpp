#include<bits/stdc++.h>
using namespace std;
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

string check(string &rbs)
{
    bool unique=true;
    for(int i=0;i<rbs.size();i++)
    {
        if(rbs[i]=='?')
        {
            if(i==0 or i==rbs.size()-1)
            {
                continue;
            }
            
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;
        cin>>s;
        if(s=="??")
        {
            yes;
            continue;
        }
        stack<char> st;
        bool ok=true;
        int cnt=0;
        for(auto c:s)
        {
            if(c=='(')
            {
                st.push(c);
            }
            else if(c=='?')
            {
                cnt++;
            }
            else
            {
                if(st.size() and st.top()=='(')
                {
                    st.pop();
                }
                else if(cnt)
                {
                    cnt--;
                }
                else
                {
                    ok=false;
                    break;
                }
            }
        }  

        cnt=0;
        for(char c:s)
        {
            if(c=='?')
                cnt++;
        }
        if(ok and st.empty())
        {
            cout<<check(s)<<'\n';
        }
        else if(cnt==1)
        {
            yes;
        }
        else
            no;
    }
    return 0;
}


// catalog moment tired erode enforce disorder property view hammer apart faculty bonus