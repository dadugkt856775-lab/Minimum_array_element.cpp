#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, edges;

    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> graph(n);

    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Enter edges:\n";

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    vector<bool> visited(n, false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int next : graph[current]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }

    return 0;
}
