#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        int c = 0;
        for(char x:s)
            if(x=='N')
                c++;
        
        puts(c==1?"NO":"YES");
    }
    return 0;
}