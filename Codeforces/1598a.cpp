#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        string a,b;
        cin>>n>>a>>b;
        bool trap=false;
        for (int i = 0; i < n; i++)
        {
            if(a[i]+b[i]==98)
            {
                trap=true;
                break;
            }
        }
        puts(trap?"NO":"YES");
    }   
    
    return 0;
}