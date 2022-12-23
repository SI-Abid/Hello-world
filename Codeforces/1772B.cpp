#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        vector<vector<int>> a(2,vector<int>(2));
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin>>a[i][j];

        function<void()> rotate = [&](){
            vector<vector<int>> b(2,vector<int>(2));
            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    b[i][j] = a[1-j][i];
            a = b;
        };

        bool ok = false;
        for(int i=0;i<4;i++)
        {
            if(a[0][0] < a[0][1] && a[1][0] < a[1][1] && a[0][1] < a[1][1] && a[0][0] < a[1][0])
            {
                ok = true;
                break;
            }
            rotate();
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}