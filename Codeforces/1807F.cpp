#include <bits/stdc++.h>
using namespace std;

signed main()
{
    map<string, pair<int, int>> dir_map = {
        {"DL", {1, -1}},
        {"DR", {1, 1}},
        {"UL", {-1, -1}},
        {"UR", {-1, 1}},
    };
    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n, m, sx, sy, ex, ey;
        string dir;
        cin >> n >> m >> sx >> sy >> ex >> ey >> dir;
        vector<vector<string>> v(n + 2, vector<string>(m + 2, ""));
        v[sx][sy] = dir;
        queue<pair<int, int>> q;
        q.push({sx, sy});
        int cnt = 0;
        while (!q.empty())
        {
            auto [x, y] = q.front();
            q.pop();
            auto [dx, dy] = dir_map[v[x][y]];
            pair<int, int> next = {x + dx, y + dy};
            if (next == make_pair(ex, ey))
            {
                // found
                break;
            }
            if (next.first == 1 or next.first == n or next.second == 1 or next.second == m)
            {
                // if stuck in loop
                if (v[next.first][next.second] != "")
                {
                    cnt = -1;
                    break;
                }
                // wall hit
                cnt++;
                if (next == make_pair(1, 1))
                {
                    v[next.first][next.second] = "DR";
                }
                else if (next == make_pair(1, m))
                {
                    v[next.first][next.second] = "DL";
                }
                else if (next == make_pair(n, 1))
                {
                    v[next.first][next.second] = "UR";
                }
                else if (next == make_pair(n, m))
                {
                    v[next.first][next.second] = "UL";
                }
                else if (next.first == 1)
                {
                    v[next.first][next.second] = v[x][y] == "UR" ? "DR" : "DL";
                }
                else if (next.first == n)
                {
                    v[next.first][next.second] = v[x][y] == "DR" ? "UR" : "UL";
                }
                else if (next.second == 1)
                {
                    v[next.first][next.second] = v[x][y] == "DL" ? "DR" : "UR";
                }
                else if (next.second == m)
                {
                    v[next.first][next.second] = v[x][y] == "DR" ? "DL" : "UL";
                }
                q.push(next);
            }
            else if (next.first > 1 and next.first < n and next.second > 1 and next.second < m)
            {
                v[next.first][next.second] = v[x][y];
                q.push(next);
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}