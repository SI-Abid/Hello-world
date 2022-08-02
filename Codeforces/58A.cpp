#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string need="hello";
    int j=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==need[j])
        {
            j++;
        }
    }
    if(j==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}