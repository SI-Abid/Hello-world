#include "bits/stdc++.h"

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    string s;
    while(cin>>s)
    {
        for(char c:s)
        {
            cout<<(char)(c-7);
        }
        cout<<endl;
    }
    return 0;
}