#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a+b<n)
        {
            cout<<"-1"<<endl;
            continue;
        }
        map<int,int> m;
        vector<int> p,q;
        p.push_back(a);
        m[a]=1;
        for(int i=b+1;p.size()/2<=n;i++)
        {
            if(m.find(i)==m.end() && !i>n)
            {
                p.push_back(i);
                m[i]=1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(m.find(i)==m.end())
            {
                q.push_back(i);
            }
        }
        if(p.size()==n/2 && q.size()==n/2)
        {
            for(int x:p)
                cout<<x<<" ";
            for(int x:q)
                cout<<x<<" ";
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }   
    return 0;
}