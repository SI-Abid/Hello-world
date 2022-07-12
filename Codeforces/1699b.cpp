#include<bits/stdc++.h>
using namespace std;

void print(const vector<int> &v, int mask=0)
{
    for(auto x:v)
    {
        cout<<(x^mask)<<" ";
    }
    cout<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a;
        for (int i = 0; i < m; i++)
        {
            a.push_back((i%4==0 or i%4==3));
        }
        for (int i = 0; i < n; i++)
        {
            if(i%4==0 or i%4==3)
            {
                print(a);
            }
            else
            {
                print(a,1);
            }
        }
    }
    return 0;
}