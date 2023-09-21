#include <bits/stdc++.h>

using namespace std;

class FordFulkerson
{
    vector<vector<int>> graph;
    vector<vector<int>> rgraph;
    int n, s, t;

public:
    void readGraph()
    {
        cout << "Enter Number of Nodes: ";
        cin >> n;
        s = 0;
        t = n - 1;
        cout << "Enter Number of edges: ";
        int edges;
        cin >> edges;
        cout << "Enter edges one by one : \n";
        vector<vector<int>> temp(n, vector<int>(n));

        for (int i = 0; i < edges; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            temp[u][v] = w;
        }

        graph = temp;
        rgraph = temp;
    }
    int run()
    {
        vector<int> parent(n);
        int max_flow = 0;
        while (bfs(parent))
        {
            int path_flow = INT_MAX;
            for (int v = t; v != s; v = parent[v])
            {
                int u = parent[v];
                path_flow = min(path_flow, rgraph[u][v]);
            }

            for (int v = t; v != s; v = parent[v])
            {
                int u = parent[v];
                rgraph[u][v] -= path_flow;
                rgraph[v][u] += path_flow;
            }
            max_flow += path_flow;
        }

        return max_flow;
    }

    bool bfs(vector<int> &parent)
    {
        vector<bool> visited(n);
        queue<int> q;
        q.push(s);
        visited[s] = true;
        parent[s] = -1;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            for (int v = 0; v < n; v++)
            {
                if (visited[v] == false and rgraph[u][v] > 0)
                {
                    if (v == t)
                    {
                        parent[v] = u;
                        return true;
                    }
                    visited[v] = true;
                    parent[v] = u;
                    q.push(v);
                }
            }
        }

        return false;
    }
};

int main()
{
    vector<vector<int>> graph = {
        {0, 11, 12, 0, 0, 0},
        {0, 0, 0, 12, 0, 0},
        {0, 1, 0, 0, 11, 0},
        {0, 0, 0, 0, 0, 19},
        {0, 0, 0, 7, 0, 4},
        {0, 0, 0, 0, 0, 0},
    };

    FordFulkerson obj;
    obj.readGraph();
    int ans = obj.run();
    cout << "Max flow : " << ans << endl;

    return 0;
}

/*
{0, 16, 13, 0, 0, 0},
{0, 0, 10, 12, 0, 0},
{0, 4, 13, 0, 14, 0},
{0, 0, 9, 0, 0, 20},
{0, 0, 0, 7, 0, 4},
{0, 0, 0, 0, 0, 0},
*/

/*
{0, 11, 12, 0, 0, 0},
{0, 0, 0, 12, 0, 0},
{0, 1, 0, 0, 11, 0},
{0, 0, 0, 0, 0, 19},
{0, 0, 0, 7, 0, 4},
{0, 0, 0, 0, 0, 0},
*/
