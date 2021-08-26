#include <iostream>

using namespace std;


int main()
{
    int k,n;
    string s, t;
    cin>>k;
    while(k-->0)    //check condition then decrease by 1
    {
        cin>>n;
        cin>>s>>t;
        int j=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                if(j<0)
                {
                    j=i;
                }
                else
                {
                    swap(s[i], t[j]);
                    break;
                }
            }
        }

        if(s==t)
            cout<<"Yes"<<endl;

        else
            cout<<"No"<<endl;

    }
}
