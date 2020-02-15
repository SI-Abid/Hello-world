#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int chain[n+1];
    int x, y, c=0;

    map <int, int> mp;

    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        mp[x]++;
        mp[y]++;
    }

    map <int, int> :: iterator it;
    int one=0, two=0, many=-1;

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second == 1)
            one++;
        if(it->second == 2)
            two++;
    }
    if(one == 2 && two == mp.size()-2)    cout<<"bus ";

    else if(two == mp.size())             cout<<"ring ";

    else if(one == mp.size()-1)           cout<<"star ";

    else    cout<<"unknown ";

    cout<<"topology"<<endl;

    return 0;
}
