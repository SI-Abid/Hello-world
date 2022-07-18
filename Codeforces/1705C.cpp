#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
        int n, c, q;
        int i;
        string s;
        cin>>n>>c>>q>>s;
        vector<ll> left(c+1), right(c+1), diff(c+1);
        left[0]=0;
        right[0]=n;
        for(i=1;i<=c;i++)
        {
            ll l,r;
            cin>>l>>r;
            l--, r--;
            left[i]=right[i-1];
            right[i]=left[i]+r-l+1;
            diff[i]= left[i]-l;
        }
        while(q--)
        {
            ll k;
            cin>>k;
            k--;
            for(i=c;i>=1;i--)
            {
                if(k<left[i])
                    continue;
                else
                    k-=diff[i];
            }
            cout<<s[k]<<endl;
        }
    }
    return 0;
}