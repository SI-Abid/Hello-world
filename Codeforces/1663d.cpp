#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int x;
    cin>>s>>x;
    if ((s=="ABC" and x<2000) or (s=="ARC" and x<2800) or (s=="AGC" and x>=1200))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}