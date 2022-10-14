#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        // sort(v.begin(),v.end());
        int mini=*min_element(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if((2*mini)<=v[i])
            {
                int div = 2*mini-1;
                ans += (v[i]/div);
                if(v[i]%div!=0)
                {
                    ans++;
                }
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}