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
        vector<bool> v(n+1,false);
        set<int> s;
        while(n--)
        {
            int x;
            cin>>x;
            if(x>=0)
            {
                if(v[x])
                    s.insert(-x);
                else
                {
                    v[x]=true;
                    s.insert(x);
                }
            }
            else
            {
                if(v[-x])
                {
                    s.insert(x);
                }
                else
                {
                    v[-x]=true;
                    s.insert(-x);
                }
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}