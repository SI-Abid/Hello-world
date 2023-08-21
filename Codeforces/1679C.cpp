#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update>

void print(ordered_set s)
{
    for (auto &&p : s)
    {
        cout << p.first << " " << p.second << ", ";
    }
    cout << nl;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    ordered_set row, col;
    while (q--)
    {
        int choice;
        int x, y;
        cin >> choice;
        if (choice == 1)
        {
            // cin >> x >> y;
            scanf("%d %d", &x, &y);
            if (row.empty() or col.empty())
            {
                row.insert({x, 1});
                col.insert({y, 1});
                continue;
            }
            auto it = row.lower_bound({x + 1, -1});
            it--;
            if (it->first == x)
            {
                row.erase(*it);
                row.insert({x, it->second + 1});
            }
            else
            {
                row.insert({x, 1});
            }
            it = col.lower_bound({y + 1, -1});
            it--;
            if (it->first == y)
            {
                col.erase(*it);
                col.insert({y, it->second + 1});
            }
            else
            {
                col.insert({y, 1});
            }
        }

        else if (choice == 2)
        {
            scanf("%d %d", &x, &y);
            auto it = row.lower_bound({x, 1});
            row.erase(*it);
            if (it->second > 1)
                row.insert({x, it->second - 1});
            it = col.lower_bound({y, 1});
            col.erase(*it);
            if (it->second > 1)
                col.insert({y, it->second - 1});
        }

        else
        {
            string s = "No";
            int x1, y1, x2, y2;
            scanf("%d %d %d %d", &x1, &y1,&x2, &y2);
            ll a = row.order_of_key({x2, 1});
            ll b = row.order_of_key({x1, 1});

            if (a != row.size() and b != row.size() and a - b == x2 - x1 and row.find_by_order(a)->first == x2 and row.find_by_order(b)->first == x1)
                s = "Yes";

            a = col.order_of_key({y2, 1});
            b = col.order_of_key({y1, 1});
            if (a != col.size() and b != col.size() and a - b == y2 - y1 and col.find_by_order(a)->first == y2 and col.find_by_order(b)->first == y1)
                s = "Yes";

            puts(s.c_str());
        }
        // puts("==row==");
        // print(row);
        // puts("==col==");
        // print(col);
        // puts("-----------");
    }
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}