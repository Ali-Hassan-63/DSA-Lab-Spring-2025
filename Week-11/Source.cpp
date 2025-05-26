//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//class Graph {
//private:
//    int V; // Number of vertices
//    vector<vector<int>> adj; // Adjacency list
//
//public:
//    Graph(int v) {
//        V = v;
//        adj.resize(V);
//    }
//
//    void addEdge(int u, int v) {
//        adj[u].push_back(v); // Directed edge
//    }
//
//    void DFSUtil(int v, vector<bool>& visited) {
//        visited[v] = true;
//        cout << v << " ";
//
//        for (int neighbor : adj[v]) {
//            if (!visited[neighbor]) {
//                DFSUtil(neighbor, visited);
//            }
//        }
//    }
//
//    void DFS(int start) {
//        vector<bool> visited(V, false);
//        cout << "DFS starting from vertex " << start << ": ";
//        DFSUtil(start, visited);
//        cout << endl;
//    }
//
//    void BFS(int start) {
//        vector<bool> visited(V, false);
//        queue<int> q;
//
//        visited[start] = true;
//        q.push(start);
//
//        cout << "BFS starting from vertex " << start << ": ";
//        while (!q.empty()) {
//            int v = q.front();
//            q.pop();
//            cout << v << " ";
//
//            for (int neighbor : adj[v]) {
//                if (!visited[neighbor]) {
//                    visited[neighbor] = true;
//                    q.push(neighbor);
//                }
//            }
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    Graph g(6);
//    g.addEdge(0, 1);
//    g.addEdge(0, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 5);
//
//    g.DFS(0);
//    g.BFS(0);
//
//    return 0;
//}
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class DijkstraGraph {
private:
    int V;
    vector<vector<pair<int, int>>> adj; // pair<vertex, weight>

public:
    DijkstraGraph(int v) {
        V = v;
        adj.resize(V);
    }

    void addEdge(int u, int v, int w) {
        adj[u].push_back({ v, w }); // Directed weighted edge
    }

    void dijkstra(int src) {
        vector<int> dist(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        dist[src] = 0;
        pq.push({ 0, src });

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (auto [v, w] : adj[u]) {
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.push({ dist[v], v });
                }
            }
        }

        cout << "Shortest distances from source " << src << ":\n";
        for (int i = 0; i < V; ++i) {
            if (dist[i] == INT_MAX)
                cout << "To " << i << " = INF" << endl;
            else
                cout << "To " << i << " = " << dist[i] << endl;
        }
    }
};

int main() {
    DijkstraGraph g(6);
    g.addEdge(0, 1, 4);
    g.addEdge(0, 2, 1);
    g.addEdge(2, 1, 2);
    g.addEdge(1, 3, 1);
    g.addEdge(2, 3, 5);
    g.addEdge(3, 4, 3);
    g.addEdge(4, 5, 1);

    g.dijkstra(0);

    return 0;
}
