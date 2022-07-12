#include<bits/stdc++.h>
using namespace std;

string increase(string s, int x)
{
    // s is in form hh:mm
    int hh=((s[0]-'0')*10)+(s[1]-'0');
    int mm=((s[3]-'0')*10)+(s[4]-'0');
    // cout<< hh<<" "<<mm<<'\n';
    mm+=x;
    if(mm>=60)
    {
        hh+=mm/60;
        mm=mm%60;
    }
    if(hh>=24)
    {
        hh=hh%24;
    }
    if(hh<10)
    {
        s[0]='0';
        s[1]=hh+'0';
    }
    else
    {
        s[0]=(hh/10)+'0';
        s[1]=(hh%10)+'0';
    }
    if(mm<10)
    {
        s[3]='0';
        s[4]=mm+'0';
    }
    else
    {
        s[3]=(mm/10)+'0';
        s[4]=(mm%10)+'0';
    }
    return s;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string time;
        int x;
        cin>>time>>x;
        int cnt=0;
        string tmp=time;
        do
        {
            if(tmp[0]==tmp[4] and tmp[1]==tmp[3])
                cnt++;
            tmp=increase(tmp,x);
            // cout<<tmp<<'\n';
        } while (time!=tmp);
        cout<< cnt<<'\n';
    }
    return 0;
}