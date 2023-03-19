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
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<int> b;
        while(mp.size())
        {
            for(auto it = mp.rbegin(); it != mp.rend(); it++)
            {
                b.push_back(it->first);
                if(it->second == 1)
                {
                    mp.erase(it->first);
                    break;
                }
                else
                {
                    it->second--;
                }
            }
        }
        int sum = 0;
        bool ugly = false;
        for(int i = 0; i < n; i++)
        {
            if(sum==b[i])
            {
                ugly = true;
                break;
            }
            sum += b[i];
        }
        if(ugly)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for(int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}