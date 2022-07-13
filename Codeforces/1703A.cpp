#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        string s;
        cin>>s;
        for (char &c:s)
            c=tolower(c);
        if(s=="yes")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    
    }
    return 0;
}