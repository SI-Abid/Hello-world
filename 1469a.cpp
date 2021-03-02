#include "bits/stdc++.h"
#define vi vector<int>
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    int t;
    for(cin>>t;t;t--)
    {
        string s;
        cin>>s;
        if(s.size()%2==0 && s[0]!=')' && s[s.size()-1]!='(')
            cout<<"YES\n";
        else 
            cout<<"no\n";   
    }
    return 0;
}