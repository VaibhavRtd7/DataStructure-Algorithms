#include <bits/stdc++.h>
using namespace std;

class Karger
{
    int n;
    vector<pair<int, int>> edges;
    int min_cut = INT_MAX;
    vector<vector<int>> graph;
    vector<vector<int>> g;

    void algo(int u, int v, int n)
    {
        vector<vector<int>> g1(n, vector<int>(n));
        cout << "before" << endl;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cout << g1[i][j] << " ";
            }
            cout << endl;
        }
        // main algorithm
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int cnt = 0;
                if (i == u and j == v)
                {
                    g1[i][j] = g1[j][i] = 0;
                    // for (int k = 0; k < edges.size(); k++)
                    // {
                    //     if ((edges[k].first == i and edges[k].second == j) or (edges[k].first == j and edges[k].second == i))
                    //     {

                    //         edges.erase(edges.begin() + k);
                    //         cout << "same : " << i << " " << j << endl;
                    //     }
                    // }
                }
                else if (i == u or i == v)
                {
                    if (g[u][j] > 0)
                        cnt += g[u][j];
                    if (g[v][j] > 0)
                        cnt += g[v][j];
                    g1[v][j] = g1[u][j] = cnt;
                }
                else if (j == u or j == v)
                {
                    if (g[u][i] > 0)
                        cnt += g[u][i];
                    if (g[v][i] > 0)
                        cnt += g[v][i];
                    g1[i][u] = g1[i][v] = cnt;
                }
                else
                {
                    g1[i][j] = g[i][j];
                }
            }
        }

        cout << "half\n";

        // copy upper trianguler to lower one
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i >= j)
                {
                    g1[i][j] = g1[j][i];
                }
            }
        }
        cout << "complete\n";
        // removing vth row and column

        g1.erase(g1.begin() + v);
        cout << "complete\n";
        for (int i = 0; i < n; i++)
        {
            g1[i].erase(g1[i].begin() + v);
        }
        cout << "after\n";
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cout << g1[i][j] << " ";
            }
            cout << endl;
        }

        g = g1;
    }

public:
    void readGraph()
    {
        cout << "Enter no of Nodes in graph : ";
        cin >> n;
        cout << "Enter no of edges in graph : ";
        int edge;
        cin >> edge;
        vector<vector<int>> temp(n, vector<int>(n));
        for (int i = 0; i < edge; i++)
        {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
            temp[u][v] = 1;
            temp[v][u] = 1;
        }
        graph = temp;
    }

    int run()
    {
        int n1 = n;
        for (int i = 0; i < 1; i++)
        {
            g = graph;
            while (n1 > 2)
            {
                int u, v;
                // pair<int, int> p = edges[rand() % edges.size()];

                while (1)
                {
                    u = rand() % n1;
                    v = rand() % n1;
                    if (g[u][v] == 1)
                    {
                        break;
                    }
                }

                cout << "selected" << u << " " << v << endl;
                algo(u, v, n1);
                n1--;
            }
            min_cut = min(g[0][1], min_cut);
        }
        return min_cut;
    }
};

/*
0 1
0 2
0 3
1 3
2 3
*/

int main()
{
    srand(time(0));

    Karger k;

    k.readGraph();
    cout << k.run() << endl;
    return 0;
}
