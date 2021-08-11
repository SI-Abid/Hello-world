#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    for(cin>>t; t; t--)
    {
        int n, k;
        cin>>n>>k;
        int ln=n-k;
        char ch='c';
        while(k--)
            cout<<ch;
        ch++;
        while(ln--)
        {
            if(ch=='d')
                ch='a';
            cout<<ch++;
        }
        puts("");
    }
    return 0;
}