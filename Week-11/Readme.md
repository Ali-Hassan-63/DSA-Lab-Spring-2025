
````markdown
# DFS and BFS in C++ using Graph Class

## Description
This program demonstrates the implementation of **Depth-First Search (DFS)** and **Breadth-First Search (BFS)** traversal algorithms using an adjacency list representation in C++. Both algorithms are implemented as **member functions** inside a `Graph` class for a directed graph.

## Features
- Uses an adjacency list for graph representation.
- DFS implemented recursively.
- BFS implemented using a queue.
- Clean and readable output showing traversal order.

## Files
- `main.cpp`: Contains the `Graph` class definition and implementations for DFS and BFS.
- No external input files are required.

## How to Compile
Use a C++ compiler like `g++`:

```bash
g++ main.cpp -o graph_traversal
./graph_traversal
````

## Output Example

```
DFS starting from vertex 0: 0 1 3 4 2 5 
BFS starting from vertex 0: 0 1 2 3 4 5 
```

## Requirements

* C++11 or later
* Works on any OS with a compatible compiler (Windows, Linux, macOS)

## Author

\[Your Name]

````

---

## ✅ README for Q2 – Dijkstra's Shortest Path Algorithm

```markdown
# Dijkstra’s Algorithm in C++ using Graph Class

## Description
This program implements **Dijkstra’s Shortest Path Algorithm** using an adjacency list and a **priority queue** (min-heap) to efficiently find the shortest distances from a single source to all other vertices in a **directed weighted graph**.

## Features
- Adjacency list representation of a graph.
- Uses `std::priority_queue` with `greater<>` for the min-heap.
- Efficient O((V + E) log V) time complexity.
- Clean output showing distances to each node from the source.

## Files
- `main.cpp`: Contains the `DijkstraGraph` class and the main function.
- No external input files are required.

## How to Compile
Compile with a C++ compiler that supports C++11 or higher:

```bash
g++ main.cpp -o dijkstra
./dijkstra
````

## Output Example

```
Shortest distances from source 0:
To 0 = 0
To 1 = 3
To 2 = 1
To 3 = 4
To 4 = 7
To 5 = 8
```

## Requirements

* C++11 or later
* Compatible with Windows, Linux, or macOS environments
