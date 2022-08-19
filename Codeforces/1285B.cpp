#include<iostream>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        bool happy=true;

        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        ll sum=0;

        for(int i=0; i<=n; i++)
        {
            sum+=a[i];
            if(sum <= 0)
                happy = false;
        }
        sum=0;

        for(int i=n-1;i>=0;i--)
        {
            sum+=a[i];
            if(sum <= 0)
                happy = false;
        }

        happy?cout<<"YES":cout<<"NO";
        cout<<endl;
        cout<<endl;

    }
    return 0;
}
