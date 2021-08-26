#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        string s;

        cin>>k>>s;

        int a=0,b=0;

        for(int i=0; i<k-1;)
        {
            if(s[i]=='A' && s[i+1]=='P')
            {
                int j, a=0;

                for( j=i+1; j<k; j++)
                {
                    if (s[j]=='P')
                        a++;
                    else
                        break;
                }

                if(b<a)
                    b=a;

                i=j;
            }
            else
                i++;
        }
        cout<<b<<endl;
    }
    return 0;
}
