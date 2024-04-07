#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> graph[10000];
vector<bool> visited;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    cout << u << " -> ";

    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        for (int i = 0; i < graph[v].size(); i++)
        {
            if (!visited[graph[v][i]])
            {
                q.push(graph[v][i]);
                visited[graph[v][i]] = true;
                cout << graph[v][i] << " -> ";
            }
        }
    }
}

int main()
{
    int node, edge;
    cout << "Enter the number of nodes and edges : ";
    cin >> node >> edge;

    cout << "Enter the Graph : ";
    for (int i = 0; i < edge; i++)
    {
        int node1, node2;
        cin >> node1 >> node2;

        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    visited.assign(node, false);

    cout << "Enter the starting node : ";
    int source;
    cin >> source;

    cout << "BFS path is : ";
    bfs(source);
}
