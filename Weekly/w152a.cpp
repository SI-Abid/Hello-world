#include<bits/stdc++.h>
using namespace std;

bool isPan(string s, int n=9)
{
    sort(s.begin(), s.end());
    if(n==8)
        return s=="12345678";
    return s == "123456789";
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v = {2,3,4,5};
    for (int i = 2; i < n+1; i++)
    {
        string s=to_string(i);
        for(auto x:v)
        {
            s+=to_string(x*i);
            if(isPan(s,k))
            {
                cout<<i<<"\n";
                // cout<<s<<"\n";
            }
        }
    }
    
    return 0;
}