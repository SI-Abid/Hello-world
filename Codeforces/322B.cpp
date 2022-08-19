#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,g,b;
    cin>>r>>g>>b;
    int buke=0;
    buke+=r/3;
    buke+=g/3;
    buke+=b/3;

    map<int,int> m;
    m[r%3]++;
    m[g%3]++;
    m[b%3]++;

    if(min({r%3,g%3,b%3})==0 and min({r,g,b})>0 and m[2]==2)
    {
        buke++;
    }
    else
    {
        buke+=min({r%3,g%3,b%3});
    }

    cout<<buke<<'\n';
    return 0;
}