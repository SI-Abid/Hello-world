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
        // transform(s.begin(),s.end(),s.begin(),::tolower);
        sort(s.begin(),s.end());
        if(s=="Timru")
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    
    }
    return 0;
}