#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const long long INF = numeric_limits<long long>::max();

class Graph
{
public:
    vector<vector<pair<int, long long>>> adj;

    Graph(int n, vector<vector<int>> &edges)
    {
        adj.resize(n);
        for (int i = 0; i < n; i++)
        {
            addEdge(edges[i]);
        }
    }

    void addEdge(vector<int> edge)
    {
        adj[edge[0]].push_back({edge[1], edge[2]});
    }

    long long shortestPath(int node1, int node2)
    {
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        vector<long long> cost(100, INF);
        pq.push({0, node1});
        cost[node1] = 0;
        while (!pq.empty())
        {
            auto [dist, node] = pq.top();
            pq.pop();
            if (dist > cost[node])
                continue;

            for (auto [new_node, weight] : adj[node])
            {
                long long distance = dist + weight;
                if (distance < cost[new_node])
                {
                    cost[new_node] = distance;
                    pq.push({distance, new_node});
                }
            }
        }
        return cost[node2] == INF ? -1 : cost[node2];
    }
};

void testGraph()
{
    // Test case
    vector<vector<int>> edges = {{7, 2, 131570}, {9, 4, 622890}, {9, 1, 812365}, {1, 3, 399349}, {10, 2, 407736},
                                 {6, 7, 880509}, {1, 4, 289656}, {8, 0, 802664}, {6, 4, 826732}, {10, 3, 567982},
                                 {5, 6, 434340}, {4, 7, 833968}, {12, 1, 578047}, {8, 5, 739814}, {10, 9, 648073},
                                 {1, 6, 679167}, {3, 6, 933017}, {0, 10, 399226}, {1, 11, 915959}, {0, 12, 393037},
                                 {11, 5, 811057}, {6, 2, 100832}, {5, 1, 731872}, {3, 8, 741455}, {2, 9, 835397},
                                 {7, 0, 516610}, {11, 8, 680504}, {3, 11, 455056}, {1, 0, 252721}};

    Graph g(13, edges);

    // Test cases
    long long result1 = g.shortestPath(9, 3);
    long long result2 = g.shortestPath(3, 10);
    long long result3 = g.shortestPath(0, 9);

    // Display results
    cout << "Shortest path from node 9 to node 3: " << result1 << endl;
    cout << "Shortest path from node 3 to node 10: " << result2 << endl;
    cout << "Shortest path from node 0 to node 9: " << result3 << endl;
}

int main()
{
    testGraph();
    return 0;
}
