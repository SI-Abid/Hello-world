#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    map<string,int> m;
    string s;
    while(n--)
    {
        cin>>s;
        m[s]++;
        if(m[s]==1)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<s<<m[s]-1<<endl;
        }
    }
    return 0;
}
