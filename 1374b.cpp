#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int u;
        cin>>u;
        int w=0;
        while(1)
        {
            if(u==1)
            {
                cout<<w<<endl;
                break;
            }
            if(u<0)
            {
                cout<<"-1"<<endl;
                break;
            }
            w++;
            if(u%6==0)
            {
                u=u/6;
            }
            else
            {
                u=u*2;
            }
            cout<<u<<" ";
        }
    }
}