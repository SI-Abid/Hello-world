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
        map<string,int> st;
        for(int i=0;i<n;i++)
        {
            string temp=s.substr(i,2);
            // if temp is found before
            if(st.find(temp)!=st.end())
            {
                if(st[temp]<i)
                {
                    cout<<"YES"<<endl;
                    goto end;
                }
            }
            else
                st[temp]=i+1;
        }
        cout<<"NO"<<endl;
        end:;
    }
    return 0;
}