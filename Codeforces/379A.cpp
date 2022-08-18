#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ans=a;
    int rem=a;
    while(rem>=b)
    {
        ans+=(rem/b);
        rem=(rem%b)+(rem/b);
    }
    cout<<ans<<endl;
    return 0;
}