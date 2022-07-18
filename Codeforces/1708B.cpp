#include<bits/stdc++.h>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    for(auto& e: v)
    {
        os<<e<<" ";
    }
    return os;
}

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n, l, r;
        cin>>n>>l>>r;
        vector<int> ans;
        ans.push_back(l);
        for(int i=2;i<=n;i++)
        {
            int tmp = (l/i)*i;
            if(l%i!=0)
            {
                tmp+=i;
            }
            if(tmp>=l && tmp<=r)
            {
                ans.push_back(tmp);
                if(ans.size()==n)
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        if(ans.size()==n)
        {
            cout<<"YES"<<endl;
            for(auto e: ans)
            {
                cout<<e<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}