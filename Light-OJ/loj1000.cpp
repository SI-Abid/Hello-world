#include "iostream"

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a, b;
        cin>>a>>b;
        cout<<"Case: "<<i<<": ";
        cout<<a+b<<endl;
    }
    return 0;
}