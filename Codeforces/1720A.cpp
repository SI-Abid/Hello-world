#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long ad=a*d;
        long long bc=b*c;
        if(ad==bc)
        {
            cout<<"0\n";
            continue;
        }
        if((bc!=0 and ad%bc==0) or (ad!=0 and bc%ad==0))
        {
            cout<<"1\n";
            continue;
        }
        cout<<"2\n";
    }
    return 0;
}