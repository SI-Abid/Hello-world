#include "bits/stdc++.h"
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    string months[12]={"January","February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    int days[12]={0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int t;
    for(cin>>t;t;t--)
    {
        string s;
        int d;
        cin>>s>>d;
        int pos;
        for(int i=0; i<12; i++)
        {
            if(s==months[i])
            {
                pos=i;
                break;
            }
        }
        d+=days[pos];
        d=((d-1)%67)+1;
        int ssn, ep;
        ssn=((d-1)/10)+1;
        ep=d%10;
        if(!ep) ep=10;
        cout<<"S";
        if(ssn<10)  cout<<0;
        cout<<ssn<<"E";
        if(ep<10)   cout<<0;
        cout<<ep<<endl;
    }
    return 0;
}