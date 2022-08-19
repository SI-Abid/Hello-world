#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int flag[256];
    int n,k;
    char c;
    cin>>n>>k>>str;
    memset(flag,0,sizeof(flag));
    for(int i=0;i<str.size();i++)
        flag[str[i]]++;
    for(int i='a';i<='z' && k;i++)
    {
        if(k>=flag[i])
        {
            k-=flag[i];
            flag[i]=0;
            c = i+1;
        }
        else
        {
            c = i;
            break;
        }
    }
    //cout<<c<<" "<<k<<endl;
    string ans;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] < c)
            continue;
        if(str[i] == c && k)
        {
            k--;
            continue;
        }
        ans+=str[i];

    }
    cout<<ans<<endl;
}
