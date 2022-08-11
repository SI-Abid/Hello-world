#include<bits/stdc++.h>
using namespace std;
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    for(auto x:v)
        os<<x<<" ";
    return os;
}
int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int>v(n);
        iota(v.begin(),v.end(),1);
        cout<<n<<endl;
        cout<<v<<endl;
        for (int i = 1; i < n; i++)
        {
            swap(v[i],v[i-1]);
            cout<<v<<endl;
        }
    }
    return 0;
}