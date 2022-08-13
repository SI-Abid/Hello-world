#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        map<int, int> m;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        int pos = n-1;
        for(int i=n-1;i>0;i--)
        {
            if(m[v[i]]==1 and v[i-1]<=v[i])
            {
                pos--;
                continue;
            }
            if(m[v[i]]>1 and v[i-1]==v[i])
            {
                pos--;
                m[v[i]]--;
                continue;
            }
            break;
        }
        set<int> s;
        for (int i = 0; i < pos; i++)
        {
            s.insert(v[i]);
        }
        // cout<<pos<<' ';
        cout<< s.size() << '\n';
    }
    return 0;
}