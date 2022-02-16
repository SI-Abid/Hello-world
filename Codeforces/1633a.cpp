#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
            continue;
        }
        for(int i=(n/10)*10; i<=((n/10)*10)+9; i++)
        {
            if(i%7==0 and i!=0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}