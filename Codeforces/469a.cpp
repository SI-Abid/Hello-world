#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n, x;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        // int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()==t)
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";

    return 0;
}