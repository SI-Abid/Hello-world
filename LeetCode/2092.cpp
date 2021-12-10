#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findAllPeople(int n, vector<vector<int>> &meetings, int firstPerson)
    {
        vector<vector<pair<int, int>>> graph(n);
        for (auto &meeting : meetings)
        {
            graph[meeting[0]].push_back({meeting[1], meeting[2]});
            graph[meeting[1]].push_back({meeting[0], meeting[2]});
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        pq.push({0, firstPerson});
        vector<bool> visited(n, false);

        while (!pq.empty())
        {
            auto [time, person] = pq.top();
            pq.pop();
            if (visited[person])
                continue;
            visited[person] = true;
            for (auto &[nextPerson, nextTime] : graph[person])
            {
                if (!visited[nextPerson] and nextTime >= time)
                    pq.push({nextTime, nextPerson});
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
            if (visited[i])
                ans.push_back(i);

        return ans;
    }
};

int main()
{
    // Input: 6 [[0,1,8],[0,5,5],[0,5,4],[1,4,5],[0,3,15],[1,0,10],[0,2,14],[2,1,18],[0,5,3],[3,2,1],[4,5,14],[5,3,13],[2,4,5],[2,1,14],[1,3,3],[1,5,17],[2,4,17]]

    Solution s;
    vector<vector<int>> meetings = {{0, 1, 8}, {0, 5, 5}, {0, 5, 4}, {1, 4, 5}, {0, 3, 15}, {1, 0, 10}, {0, 2, 14}, {2, 1, 18}, {0, 5, 3}, {3, 2, 1}, {4, 5, 14}, {5, 3, 13}, {2, 4, 5}, {2, 1, 14}, {1, 3, 3}, {1, 5, 17}, {2, 4, 17}};
    int firstPerson = 3;
    vector<int> ans = s.findAllPeople(6, meetings, firstPerson);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}

//==============================   DUMP   ==============================//

// void dfs(int u, int time, vector< vector< pair<int, int> > > &adj, vector<int> &visited, vector<int> &ans) {
//     if(visited[u])return;
//     visited[u] = 1;
//     ans.push_back(u);
//     for(auto v : adj[u]) {
//         if(visited[v.second] == 0 && v.first >= time)
//             dfs(v.second, v.first, adj, visited, ans);
//     }
// }

// vector<int> findAllPeople(int n, vector<vector<int>> &meetings, int firstPerson) {
//     set < int > st;
//     vector<vector<pair<int, int>>> edges(n + 1);
//     for(auto &i : meetings) {
//         edges[i[0]].push_back({i[2], i[1]});
//         edges[i[1]].push_back({i[2], i[0]});
//         st.insert(i[0]);
//         st.insert(i[1]);
//     }
//     edges[firstPerson].push_back({0, 0});
//     edges[0].push_back({0, firstPerson});
//     // dfs from firstPerson
//     vector<int> ans;
//     vector<int> visited(n + 1, 0);
//     st.insert(firstPerson);
//     st.insert(0);
//     for(auto i : st) {
//         sort(edges[i].begin(), edges[i].end());
//     }

//     dfs(0, 0, edges, visited, ans);

//     sort(ans.begin(), ans.end());

//     return ans;
// }