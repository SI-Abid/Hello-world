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
        vector<long long>arr(n);
        int heroes=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0) heroes++;
        }
        stack<long long>st;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                if(!st.empty())
                {
                    ans+=st.top();
                    st.pop();
                }
                heroes--;
            }
            else
            {
                if(st.size()<heroes)
                {
                    st.push(arr[i]);
                }
                else
                {
                    if(st.top()<arr[i])
                    {
                        st.pop();
                        st.push(arr[i]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}