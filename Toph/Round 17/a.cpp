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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool balanced=false;
        for(auto it=a.begin()+1;it!=a.end();it++)
        {
            int fa = *max_element(a.begin(),it) - *min_element(a.begin(),it);
            int sa = *max_element(it,a.end()) - *min_element(it,a.end());
            if(fa==sa)
            {
                balanced=true;
                break;
            }
        }
        cout<<(balanced?"0":"1")<<'\n';
    }
    return 0;
}