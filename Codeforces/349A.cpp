#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    map<int,int> mp;
    while(n--)
    {
        cin>>x;
        mp[x]++;
        if(x==25)
        continue;
        if(x==50)
        {
            if(mp[25]>0)
            mp[25]--;
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        if(x==100)
        {
            if(mp[50]>0 && mp[25]>0)
            {
                mp[50]--;
                mp[25]--;
            }
            else if(mp[25]>2)
            {
                mp[25]-=3;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}