#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n!=1)cout<<"-";
        cout<<n-1<<" "<<n<<endl;
    }   
    return 0;
}