## 03-03-2025 Graphing Algorithms

A graph is simply a set of verticies and a set of edges that connect pairs of distinct verticies

adjacent and incident mean the same thing

A graph with V verticies has at most V(V-1)/2 edges

### Terms

Two graphs are *isomorphic* if you can relabel the verticies and make the set of edges in each graph identical

Path - is just a set of vertices in which each successive vertext is adjacent to its predecessor in the path.

Simple Path - Verticies and edges are distinct

Cycle - Simple path in which the first and last verticies are the same.

### Dijkstra's Algorithm
Dijkstra's Algorithm solves the single-source shortest path problem for a directed graph with a nonnegative edge weights

Basically, it starts at a node, sets the distance to that node to 0, finds the next closest node, and then updates the distance to that node.

It works by keeping for each vertext *v* the cost of d[v] of the shortest path found so far between **s** and *v*


### Breadth-First Search
BFS uses a queue to keep track of the neighbors. It stays local and spreads out evenly and examines all neighbors

### Depth-First Search
DFS uses a stack to keep track of the nodes. DFS charges to one end of the graph, and traces back searching the neighbors

