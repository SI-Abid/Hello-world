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
        vector<int> a,lt,rt;
        int l=0,r=n-1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        if(a[0]!=n &&  a[n-1]!=n)
        {
            cout<<"-1"<<endl;
            continue;
        }
        while(l<=r)
        {
            if(a[l]>a[r])
            {
                lt.push_back(a[l]);
                l++;
            }
            else
            {
                rt.push_back(a[r]);
                r--;
            }
        }
        reverse(lt.begin(),lt.end());
        //reverse(rt.begin(),rt.end());
        //cout<<"OUTPUT";
        for(int i=0;i<rt.size();i++)
        {
            cout<<rt[i]<<" ";
        }
        for(int i=0;i<lt.size();i++)
        {
            cout<<lt[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
