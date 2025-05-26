
## 📘 README: Weighted Graph Class Template in C++

### 📌 Project Overview

This project implements a **generic class template** for **Weighted Graphs** using two different representations:

* ✅ **Adjacency Matrix**
* ✅ **Adjacency List**

The template allows the use of any data type for vertices (e.g., `int`, `string`, `char`) and supports weighted edges.

---

### 🧱 Features

* ✅ Templated graph class for flexibility
* ✅ Two implementations: Matrix & List
* ✅ Add vertex and weighted edge
* ✅ Display the graph structure
* ✅ Supports directed or undirected graphs

---

### 🧪 Example Usage

#### For Adjacency Matrix:

```cpp
GraphMatrix<string> g(4);
g.addVertex("A");
g.addVertex("B");
g.addVertex("C");
g.addEdge("A", "B", 5);
g.addEdge("A", "C", 3);
g.display();
```

#### For Adjacency List:

```cpp
GraphList<char> g;
g.addVertex('A');
g.addVertex('B');
g.addEdge('A', 'B', 2);
g.addEdge('B', 'A', 2);
g.display();
```

---

### 📂 Project Structure

```
📁 WeightedGraphTemplate
│
├── GraphMatrix.h      // Templated class using adjacency matrix
├── GraphList.h        // Templated class using adjacency list
├── main.cpp           // Test and demonstration
└── README.md          // Documentation
```

---

### 🧠 Concepts Used

* ✅ C++ Templates
* ✅ Object-Oriented Design
* ✅ Adjacency Matrix & List Representations
* ✅ STL (for adjacency list: `unordered_map`, `vector`)
* ✅ Weighted Edges
* ✅ Graph Traversal Potential (can extend)

---

### 📤 Output Format (Example)

**Adjacency Matrix:**

```
Graph (Adjacency Matrix):
     A   B   C
A [  0   5   3 ]
B [  0   0   0 ]
C [  0   0   0 ]
```

**Adjacency List:**

```
Graph (Adjacency List):
A -> (B, weight: 2)
B -> (A, weight: 2)
```

---

### ⚙️ Compile and Run

```bash
g++ main.cpp -o weighted_graph
./weighted_graph
```

---

### 🔄 Extendable Features

* Shortest path algorithms (Dijkstra, Bellman-Ford)
* Depth-First and Breadth-First Search
* Support for unweighted graphs
* Graph visualization

---

### ✍️ Author

Designed as part of a **Data Structures and Algorithms** course to understand graph representations and template programming in C++.

