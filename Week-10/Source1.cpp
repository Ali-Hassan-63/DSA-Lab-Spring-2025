#include <iostream>
using namespace std;

// Vertex class to hold label/data of a vertex
template <typename T>
class Vertex {
public:
    T data;
    Vertex(T val) : data(val) {}  // Constructor
};

// Graph class using adjacency matrix
template <typename T>
class GraphMatrix {
private:
    int vertices;
    Vertex<T>** vertexList;  // Array of pointers to Vertex
    int** adjMatrix;         // 2D array for adjacency matrix

public:
    // Constructor
    GraphMatrix(int v) {
        vertices = v;
        vertexList = new Vertex<T>*[vertices];
        adjMatrix = new int* [vertices];

        for (int i = 0; i < vertices; ++i) {
            adjMatrix[i] = new int[vertices];
            for (int j = 0; j < vertices; ++j)
                adjMatrix[i][j] = 0;
        }
    }

    // Add vertex at index
    void add_vertex(int index, T val) {
        if (index >= 0 && index < vertices)
            vertexList[index] = new Vertex<T>(val);
    }

    // Add undirected edge
    void add_edge(int u, int v) {
        if (u >= 0 && v >= 0 && u < vertices && v < vertices) {
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;
        }
    }

    // Print adjacency matrix
    void print() {
        cout << "Adjacency Matrix:\n    ";
        for (int i = 0; i < vertices; ++i)
            cout << vertexList[i]->data << " ";
        cout << "\n";

        for (int i = 0; i < vertices; ++i) {
            cout << vertexList[i]->data << " | ";
            for (int j = 0; j < vertices; ++j)
                cout << adjMatrix[i][j] << " ";
            cout << endl;
        }
    }

    // Destructor
    ~GraphMatrix() {
        for (int i = 0; i < vertices; ++i)
            delete vertexList[i];
        delete[] vertexList;

        for (int i = 0; i < vertices; ++i)
            delete[] adjMatrix[i];
        delete[] adjMatrix;
    }
};

// Main function
int main() {
    GraphMatrix<char> g(4);
    g.add_vertex(0, 'A');
    g.add_vertex(1, 'B');
    g.add_vertex(2, 'C');
    g.add_vertex(3, 'D');

    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 3);
    g.add_edge(2, 3);

    g.print();
    return 0;
}
//----------------------------------------------------------------------------
/*#include <iostream>
using namespace std;

// Vertex class
template <typename T>
class Vertex {
public:
    T data;
    Vertex(T val) : data(val) {}  // Constructor
};

// Graph class using adjacency list
template <typename T>
class GraphList {
private:
    struct Node {
        int index;   // Index of the adjacent vertex
        Node* next;
    };

    int vertices;
    Vertex<T>** vertexList;  // Array of vertex pointers
    Node** adjList;          // Array of linked lists

public:
    // Constructor
    GraphList(int v) {
        vertices = v;
        vertexList = new Vertex<T>*[vertices];
        adjList = new Node*[vertices];
        for (int i = 0; i < vertices; ++i)
            adjList[i] = nullptr;
    }

    // Add a vertex at an index
    void add_vertex(int index, T val) {
        if (index >= 0 && index < vertices)
            vertexList[index] = new Vertex<T>(val);
    }

    // Add undirected edge
    void add_edge(int u, int v) {
        if (u >= 0 && v >= 0 && u < vertices && v < vertices) {
            // Add v to u's list
            Node* node1 = new Node{v, adjList[u]};
            adjList[u] = node1;

            // Add u to v's list
            Node* node2 = new Node{u, adjList[v]};
            adjList[v] = node2;
        }
    }

    // Print adjacency list
    void print() {
        cout << "Adjacency List:\n";
        for (int i = 0; i < vertices; ++i) {
            cout << vertexList[i]->data << " -> ";
            Node* temp = adjList[i];
            while (temp != nullptr) {
                cout << vertexList[temp->index]->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    // Destructor
    ~GraphList() {
        for (int i = 0; i < vertices; ++i) {
            delete vertexList[i];
            Node* curr = adjList[i];
            while (curr != nullptr) {
                Node* temp = curr;
                curr = curr->next;
                delete temp;
            }
        }
        delete[] vertexList;
        delete[] adjList;
    }
};

// Main function
int main() {
    GraphList<char> g(4);
    g.add_vertex(0, 'A');
    g.add_vertex(1, 'B');
    g.add_vertex(2, 'C');
    g.add_vertex(3, 'D');

    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 3);

    g.print();
    return 0;
}
*/