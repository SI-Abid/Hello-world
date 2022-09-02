#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(4);
    // v.push_back(7);
    // int x = 4;
    // int ans = 7;
    // while(x<=100000000)
    // {
    //     if(x%6==0)
    //     {
    //         ans+=4;
    //     }
    //     else if(x%2==0 or x%3==0)
    //     {
    //         ans+=2;
    //     }
    //     ans++;
    //     v.push_back(ans);
    //     x++;
    // }
    // for(int i=0;i<1000;i++)
    // {
    //     cout<<v[i]<<' ';
    // }
    // cout<<endl;
    int t,n;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans = n;
        ans+= 2*(n/2);
        ans+= 2*(n/3);
        cout << ans << '\n';
    }
    
    // vector<int> input(t);
    // map<int,int> m;
    // for(int i=0;i<t;i++)
    // {
    //     cin>>input[i];
    //     m[input[i]]=i;
    // }
    // sort(input.begin(),input.end());
    // int limit = input[t-1];
    // int x=1;
    // int ans = 0;
    // int i=0;
    // vector<int> out(t);
    // while(x<=limit)
    // {
    //     if(x%6==0)
    //     {
    //         ans+=4;
    //     }
    //     else
    //     {
    //         if(x%2==0)
    //         {
    //             ans+=2;
    //         }
    //         if(x%3==0)
    //         {
    //             ans+=2;
    //         }
    //     }
    //     ans++;
    //     if(x==input[i])
    //     {
    //         out[m[input[i]]]=ans;
    //         i++;
    //     }
    //     x++;
    // }
    // for(int i=0;i<t;i++)
    // {
    //     cout<<out[i]<<'\n';
    // }

    return 0;
}