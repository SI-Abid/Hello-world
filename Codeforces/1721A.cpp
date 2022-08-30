#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        set<char> s;
        for (size_t i = 0; i < 4; i++)
        {
            char c;
            cin>>c;
            s.insert(c);
        }
        cout<<s.size()-1<<'\n';
    
    }
    return 0;
}