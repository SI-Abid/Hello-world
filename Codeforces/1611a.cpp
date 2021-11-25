#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int res=-1;
        if((s[s.size()-1]-48)%2==0)
            res=0;
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if((s[i]-48)%2==0)
                {
                    if(i==0)
                        res=1;
                    else
                        res=2;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}