#include<iostream>
using namespace std;

string samestring(string a)
{
    for(int i=0;i<a.length();i++)
    {
        if(a.at(i)>='A'&&a.at(i)<='Z')
        {
            a.at(i)+=32;
        }
    }
    return a;
}

int main()
{
    string a, b;
    int i,x=0,y=0,z=0,l;
    cin>>a;
    cin>>b;
    a=samestring(a);
    b=samestring(b);
    l=a.length();

    for(i=0;i<l;i++)
    {
        if(a.at(i)==b.at(i))
        {
            z++;
        }
        else if(a.at(i)>b.at(i))
        {
            cout<<"1";
            break;
        }
        else if(a.at(i)<b.at(i))
        {
            cout<<"-1";
            break;
        }
    }
    if(z==l)
    {
        cout<<"0";
    }

    return 0;
}
