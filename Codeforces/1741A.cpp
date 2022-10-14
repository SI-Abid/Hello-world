#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        string a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"=\n";
        }
        else
        {
            if(a.back()==b.back())
            {
                if(a.back()=='L')
                {
                    if(a.size()>b.size())
                    {
                        cout<<">\n";
                    }
                    else
                    {
                        cout<<"<\n";
                    }
                }
                else
                {
                    if(a.size()>b.size())
                    {
                        cout<<"<\n";
                    }
                    else
                    {
                        cout<<">\n";
                    }
                }
            }
            else
            {
                if(a.back()=='S')
                {
                    cout<<"<\n";
                }
                else if(a.back()=='L')
                {
                    cout<<">\n";
                }
                else
                {
                    if(b.back()=='S')
                    {
                        cout<<">\n";
                    }
                    else
                    {
                        cout<<"<\n";
                    }
                }
            }
        }
    }
    return 0;
}