#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<"NO";
        return 0;
    }
    while(cnt>0)
    {
        int x=cnt%10;
        if(x!=4 && x!=7)
        {
            cout<<"NO";
            return 0;
        }
        cnt/=10;
    }
    cout<<"YES";
    return 0;
}