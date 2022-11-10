#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;
        cin>>s;
        int n=s.size();
        cout<< n- count(s.begin(),s.end(),'0') <<endl;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='0')
            {
                cout<<s[i];
                for(int j=i+1;j<n;j++)
                {
                    cout<<'0';
                }
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}