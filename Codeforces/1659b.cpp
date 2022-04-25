#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int one, zero;
        one = zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        if(n%2==1)
        {
            
        }   
    }
    return 0;
}