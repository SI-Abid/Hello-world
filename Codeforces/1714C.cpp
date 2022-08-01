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
        string s="";
        int x=9;
        while(n)
        {
            int xx = min(n,x);
            s+=to_string(xx);
            n-=xx;
            x--;
        }
        reverse(s.begin(),s.end());
        cout<<s<<"\n";
    }
    return 0;
}