#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    cin>>str;

    for(int i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            for(int j=0;j<i/2;j++)
                swap(str[j],str[i-j-1]);
        }
    }
    cout<<str<<endl;
}
