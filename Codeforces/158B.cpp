#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    while(!v.empty())
    {
        int x=v.back();
        v.pop_back();
        while(!v.empty())
        {
            if(x+v.front()<=4)
            {
                x+=v.front();
                v.erase(v.begin());
            }
            else
            {
                break;
            }

        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}