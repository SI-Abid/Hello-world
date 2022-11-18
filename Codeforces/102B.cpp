#include<bits/stdc++.h>
using namespace std;
int sod(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=s[i]-'0';
    }
    return sum;
}
int sod(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
signed main()
{
    string n;
    cin >> n;
    int ans=0;
    int sum;
    if(n.size()>1)
    {
        sum=sod(n);
        while(sum>9)
        {
            sum=sod(sum);
            ans++;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}