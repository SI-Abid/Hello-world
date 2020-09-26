#include "bits/stdc++.h"

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int n, odd=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++)
        {
            int c=s[i]-'0';
            
            if((c&1)&& !(i&1)) 
                odd++;
        }
        if(n&1 && odd>0)
        {
            puts("1");
        }
        else 
            puts("2");
        
    }
    return 0;
}