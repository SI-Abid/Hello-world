#include <bits/stdc++.h>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for(auto x: v) os << x << " ";
    return os;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    #endif
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        int d = 2;
        vector<int> a;
        a.push_back(1);
        int cnt = 2;
        map<int, bool> mp;
        mp[1] = true;
        while (a.size() < n)
        {
            if (a.back() * d <= n)
            {
                int cand = a.back() * d;
                a.push_back(cand);
                mp[cand] = true;
            }
            else
            {
                cnt++;
                if (cnt > n)
                    break;
                if(mp[cnt]==false)
                {
                    a.push_back(cnt);
                    mp[cnt] = true;
                }
            }
        }
        cout<<d<<'\n'<<a<<'\n';
    }
    return 0;
}