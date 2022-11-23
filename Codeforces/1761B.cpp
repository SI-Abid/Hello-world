#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        if(a.size()==1)
        {
            cout<<"1\n";
        }
        else if(a.size()==2)
        {
            cout<<(n-2)/2+2<<"\n";
        }
        else
        {
            cout<<n<<'\n';
        }
    }
    return 0;
}