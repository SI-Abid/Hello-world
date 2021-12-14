#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v(7);
        for(int i=0;i<7;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int v3 = *max_element(v.begin(),v.end());
        // cout<<v3<<endl;
        cout<<v[0]<<" "<<v[1]<<" "<<v3-(v[0]+v[1])<<endl;
    }
    return 0;
}