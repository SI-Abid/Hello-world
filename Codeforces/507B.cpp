#include<bits/stdc++.h>
using namespace std;

signed main()
{
    long long r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    double d = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    cout << fixed << setprecision(0);
    // cout << d << endl;
    d = sqrt(d);
    // cout << d << endl;
    cout<<ceil(d/(2.0*r))<<endl;
    return 0;
}